# DSA C++

DSA and problem-solving in C++ with sample inputs, outputs, and GitHub Actions for automatic output generation.

## Repo layout

- `problems/pattern-printing/main.cpp`: example solved problem
- `problems/pattern-printing/input.txt`: sample input for the program
- `outputs/pattern-printing.txt`: generated output committed by GitHub Actions
- `scripts/run_pattern_printing.sh`: local and CI runner
- `.github/workflows/publish-pattern-output.yml`: GitHub Action that compiles, runs, and commits output

## Example workflow

1. Solve a problem in a folder inside `problems/`.
2. Add or update the matching `input.txt`.
3. Test it locally.
4. Commit and push your code.
5. GitHub Actions generates the output and pushes `outputs/pattern-printing.txt`.

## Current sample

The sample program prints a reverse star triangle.

Sample input:

```text
1
5
```

Expected output:

```text
* * * * *
* * * *
* * *
* *
*
```
