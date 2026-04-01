#!/usr/bin/env bash

set -euo pipefail

QUESTION_NUMBER="${1:-}"
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

if [[ -z "$QUESTION_NUMBER" ]]; then
    echo "Usage: ./scripts/new_leetcode_problem.sh <question-number>"
    exit 1
fi

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

echo "Created:"
echo "  $SOURCE_FILE"
echo "  $INPUT_FILE"
