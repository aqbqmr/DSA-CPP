#!/usr/bin/env bash

set -euo pipefail

QUESTION_NUMBER="${1:-}"
QUESTION_SLUG_RAW="${*:2}"
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

if [[ -z "$QUESTION_NUMBER" ]]; then
    echo "Usage: ./scripts/new_leetcode_problem.sh <question-number> [question-title-or-slug]"
    exit 1
fi

if [[ ! "$QUESTION_NUMBER" =~ ^[0-9]+$ ]]; then
    echo "Question number must contain digits only."
    exit 1
fi

if [[ -z "$QUESTION_SLUG_RAW" ]]; then
    FILE_NAME="leetcode_ques_no_${QUESTION_NUMBER}"
    SOURCE_FILE="$PROJECT_ROOT/problems/leetcode/${FILE_NAME}.cpp"
    INPUT_FILE="$PROJECT_ROOT/inputs/leetcode/${FILE_NAME}.txt"

    mkdir -p "$(dirname "$SOURCE_FILE")" "$(dirname "$INPUT_FILE")"

    if [[ ! -f "$SOURCE_FILE" ]]; then
        cat <<'EOF' > "$SOURCE_FILE"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}
EOF
    fi

    touch "$INPUT_FILE"

    echo "Created legacy layout:"
    echo "  $SOURCE_FILE"
    echo "  $INPUT_FILE"
    exit 0
fi

QUESTION_NUMBER_PADDED="$(printf "%04d" "$QUESTION_NUMBER")"
QUESTION_SLUG="$(echo "$QUESTION_SLUG_RAW" | tr '[:upper:]' '[:lower:]' | sed -E 's/[^a-z0-9]+/-/g; s/^-+//; s/-+$//; s/-+/-/g')"

if [[ -z "$QUESTION_SLUG" ]]; then
    echo "Question title or slug is empty after normalization."
    exit 1
fi

QUESTION_TITLE="$(echo "$QUESTION_SLUG" | tr '-' ' ' | awk '{for (i = 1; i <= NF; ++i) $i = toupper(substr($i, 1, 1)) substr($i, 2); print}')"
PROBLEM_DIR="$PROJECT_ROOT/${QUESTION_NUMBER_PADDED}-${QUESTION_SLUG}"
SOURCE_FILE="$PROBLEM_DIR/${QUESTION_NUMBER_PADDED}-${QUESTION_SLUG}.cpp"
README_FILE="$PROBLEM_DIR/README.md"

mkdir -p "$PROBLEM_DIR"

if [[ ! -f "$SOURCE_FILE" ]]; then
    cat <<'EOF' > "$SOURCE_FILE"
class Solution {
public:
};
EOF
fi

if [[ ! -f "$README_FILE" ]]; then
    cat > "$README_FILE" <<EOF
# ${QUESTION_NUMBER}. ${QUESTION_TITLE}

LeetCode solution folder for ${QUESTION_NUMBER}. ${QUESTION_TITLE}.

## Files

- \`${QUESTION_NUMBER_PADDED}-${QUESTION_SLUG}.cpp\`
EOF
fi

echo "Created:"
echo "  $PROBLEM_DIR"
echo "  $SOURCE_FILE"
echo "  $README_FILE"
