#!/usr/bin/env bash

set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
SOURCE_FILE="$ROOT_DIR/problems/pattern-printing/main.cpp"
INPUT_FILE="$ROOT_DIR/problems/pattern-printing/input.txt"
OUTPUT_DIR="$ROOT_DIR/outputs"
OUTPUT_FILE="$OUTPUT_DIR/pattern-printing.txt"
BUILD_DIR="$OUTPUT_DIR/.tmp"
EXECUTABLE="$BUILD_DIR/pattern-printing"
TEMP_OUTPUT="$BUILD_DIR/pattern-printing.txt"

mkdir -p "$OUTPUT_DIR" "$BUILD_DIR"

c++ -std=c++17 -O2 -Wall -Wextra -pedantic "$SOURCE_FILE" -o "$EXECUTABLE"

if [[ -f "$INPUT_FILE" ]]; then
    "$EXECUTABLE" < "$INPUT_FILE" > "$TEMP_OUTPUT"
else
    "$EXECUTABLE" > "$TEMP_OUTPUT"
fi

mv "$TEMP_OUTPUT" "$OUTPUT_FILE"

printf 'Generated from %s\n' "$SOURCE_FILE" > "$OUTPUT_DIR/README.txt"
printf 'Input file: %s\n' "$INPUT_FILE" >> "$OUTPUT_DIR/README.txt"
printf 'Output file: %s\n' "$OUTPUT_FILE" >> "$OUTPUT_DIR/README.txt"
