#!/usr/bin/env bash

set -euo pipefail

MODE="${1:-run}"
SOURCE_PATH="${2:-}"
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

if [[ -z "$SOURCE_PATH" ]]; then
    echo "Usage: run_cpp_file.sh <compile|run> <source.cpp>"
    exit 1
fi

SOURCE_DIR="$(cd "$(dirname "$SOURCE_PATH")" && pwd)"
SOURCE_FILE="$SOURCE_DIR/$(basename "$SOURCE_PATH")"

if [[ ! -f "$SOURCE_FILE" ]]; then
    echo "Source file not found: $SOURCE_FILE"
    exit 1
fi

if [[ "${SOURCE_FILE##*.}" != "cpp" ]]; then
    echo "Please select a .cpp file."
    exit 1
fi

case "$SOURCE_FILE" in
    "$PROJECT_ROOT"/*) ;;
    *)
        echo "The selected file must be inside $PROJECT_ROOT"
        exit 1
        ;;
esac

RELATIVE_SOURCE="${SOURCE_FILE#$PROJECT_ROOT/}"
SOURCE_STEM="${SOURCE_FILE%.cpp}"
SOURCE_DIR="$(dirname "$SOURCE_FILE")"
SOURCE_BASENAME="$(basename "$SOURCE_STEM")"
BINARY_PATH="$PROJECT_ROOT/build/${RELATIVE_SOURCE%.cpp}"
LEGACY_INPUT_FILE="$SOURCE_DIR/input.txt"
SAME_NAME_INPUT_FILE="$SOURCE_DIR/${SOURCE_BASENAME}.txt"

mkdir -p "$(dirname "$BINARY_PATH")"

c++ -std=c++17 -O2 -Wall -Wextra -pedantic "$SOURCE_FILE" -o "$BINARY_PATH"

echo "Built: $BINARY_PATH"

if [[ "$MODE" == "compile" ]]; then
    exit 0
fi

echo
echo "Running: $(basename "$SOURCE_FILE")"

if [[ -f "$SAME_NAME_INPUT_FILE" ]]; then
    echo "Input: $SAME_NAME_INPUT_FILE"
    "$BINARY_PATH" < "$SAME_NAME_INPUT_FILE"
elif [[ -f "$LEGACY_INPUT_FILE" ]]; then
    echo "Input: $LEGACY_INPUT_FILE"
    "$BINARY_PATH" < "$LEGACY_INPUT_FILE"
else
    "$BINARY_PATH"
fi
