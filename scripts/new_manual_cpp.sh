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
INPUT_FILE="$TARGET_DIR/${TARGET_NAME}.txt"

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

touch "$INPUT_FILE"

echo "Created:"
echo "  $SOURCE_FILE"
echo "  $INPUT_FILE"
