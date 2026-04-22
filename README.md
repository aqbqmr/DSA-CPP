# DSA C++

This repo is now focused on only two things:

- auto-synced LeetCode solutions at the repo root
- a manual C++ study area inside `manual/cpp/`

## Repo layout

- `0001-two-sum/`
  Synced from LeetCode after I solve and accept a problem
- `manual/cpp/`
  My own notes, topic-wise code, and handwritten practice
- `.github/workflows/sync-leetcode.yml`
  GitHub Actions workflow that fetches accepted LeetCode submissions
- `scripts/new_manual_cpp.sh`
- `scripts/run_cpp_file.sh`
  Compiles and runs any `.cpp` file inside this repo

## LeetCode sync

Accepted submissions are fetched automatically by the GitHub Action in `.github/workflows/sync-leetcode.yml`.

## Manual study area

Here `manual/cpp/` for topic-wise learning that I write myself and push to GitHub.

Example:

```bash
./scripts/new_manual_cpp.sh arrays/two_pointer_notes
```

This creates:

- `manual/cpp/arrays/two_pointer_notes.cpp`
- `manual/cpp/arrays/two_pointer_notes.md`

the `.cpp` file for practice code and the `.md` file for notes, patterns, mistakes, and revision points.

## Run C++ files

```bash
./scripts/run_cpp_file.sh run manual/cpp/arrays/two_pointer_notes.cpp
```

If a file named `two_pointer_notes.txt` or `input.txt` exists beside the source file, it will be used as input automatically.
