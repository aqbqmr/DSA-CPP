#!/usr/bin/env bash

set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
SOURCE_FILE="$ROOT_DIR/problems/practice/something.cpp"
INPUT_FILE="$ROOT_DIR/problems/practice/input.txt"
OUTPUT_DIR="$ROOT_DIR/outputs/practice"
OUTPUT_FILE="$OUTPUT_DIR/something.txt"
README_FILE="$OUTPUT_DIR/README.txt"
BUILD_DIR="$OUTPUT_DIR/.tmp"
EXECUTABLE="$BUILD_DIR/something"
COMPILE_LOG="$BUILD_DIR/compile.log"
SOURCE_FILE_REL="problems/practice/something.cpp"
INPUT_FILE_REL="problems/practice/input.txt"
OUTPUT_FILE_REL="outputs/practice/something.txt"

mkdir -p "$OUTPUT_DIR" "$BUILD_DIR"

if c++ -std=c++17 -O2 -Wall -Wextra -pedantic "$SOURCE_FILE" -o "$EXECUTABLE" >"$COMPILE_LOG" 2>&1; then
    if [[ -f "$INPUT_FILE" ]]; then
        "$EXECUTABLE" < "$INPUT_FILE" > "$OUTPUT_FILE"
    else
        "$EXECUTABLE" > "$OUTPUT_FILE"
    fi
    STATUS="success"
else
    {
        echo "Compilation failed for $SOURCE_FILE_REL"
        echo
        cat "$COMPILE_LOG"
    } > "$OUTPUT_FILE"
    STATUS="compile_failed"
fi

printf 'Generated from %s\n' "$SOURCE_FILE_REL" > "$README_FILE"
printf 'Input file: %s\n' "$INPUT_FILE_REL" >> "$README_FILE"
printf 'Output file: %s\n' "$OUTPUT_FILE_REL" >> "$README_FILE"
printf 'Status: %s\n' "$STATUS" >> "$README_FILE"
