#!/usr/bin/env bash

set -euo pipefail

RELATIVE_TARGET="${1:-}"
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

if [[ -z "$RELATIVE_TARGET" ]]; then
    echo "Usage: ./scripts/new_manual_cpp.sh <topic/name>"
    exit 1
fi

RELATIVE_TARGET="$(echo "$RELATIVE_TARGET" | sed -E 's#^/+##; s#/+$##')"
TARGET_DIR="$PROJECT_ROOT/manual/cpp/$(dirname "$RELATIVE_TARGET")"
TARGET_NAME="$(basename "$RELATIVE_TARGET")"
SOURCE_FILE="$TARGET_DIR/${TARGET_NAME}.cpp"
NOTE_FILE="$TARGET_DIR/${TARGET_NAME}.md"
DISPLAY_TITLE="$(echo "$TARGET_NAME" | tr '_-' '  ' | awk '{for (i = 1; i <= NF; ++i) $i = toupper(substr($i, 1, 1)) substr($i, 2); print}')"

mkdir -p "$TARGET_DIR"

if [[ ! -f "$SOURCE_FILE" ]]; then
    cat <<'EOF' > "$SOURCE_FILE"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}
EOF
fi

if [[ ! -f "$NOTE_FILE" ]]; then
    cat > "$NOTE_FILE" <<EOF
# ${DISPLAY_TITLE}

## Goal

Write what you want to learn in this topic.

## Key Points

- 

## Time and Space Complexity

- Time:
- Space:

## Mistakes To Avoid

- 

## Revision Notes

- 
EOF
fi

echo "Created:"
echo "  $SOURCE_FILE"
echo "  $NOTE_FILE"
