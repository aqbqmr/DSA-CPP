# DSA C++

This repo is now focused on only two things:

- auto-synced LeetCode solutions at the repo root
- a manual C++ study area inside `manual/cpp/`

## Repo layout

- `0001-two-sum/`
  Synced from LeetCode after you solve and accept a problem
- `manual/cpp/`
  Your own notes, topic-wise code, and handwritten practice
- `.github/workflows/sync-leetcode.yml`
  GitHub Actions workflow that fetches accepted LeetCode submissions
- `scripts/new_manual_cpp.sh`
  Creates a manual study file and matching notes file
- `scripts/run_cpp_file.sh`
  Compiles and runs any `.cpp` file inside this repo

## LeetCode sync

Accepted submissions are fetched automatically by the GitHub Action in `.github/workflows/sync-leetcode.yml`.

To set it up:

1. Log in to LeetCode in your browser.
2. Open DevTools and copy your `csrftoken` cookie value.
3. Copy your `LEETCODE_SESSION` cookie value.
4. Add both values to your GitHub repo secrets:
   - `LEETCODE_CSRF_TOKEN`
   - `LEETCODE_SESSION`
5. In GitHub repository settings, make sure Actions has read and write permission.
6. Run the `Sync LeetCode` workflow once from the `Actions` tab.

The workflow will create or update folders like:

- `0007-reverse-integer/`
- `0009-palindrome-number/`
- `4168-mirror-distance-of-an-integer/`

## Manual study area

Use `manual/cpp/` for topic-wise learning that you write yourself and push to GitHub.

Example:

```bash
./scripts/new_manual_cpp.sh arrays/two_pointer_notes
```

This creates:

- `manual/cpp/arrays/two_pointer_notes.cpp`
- `manual/cpp/arrays/two_pointer_notes.md`

Use the `.cpp` file for practice code and the `.md` file for notes, patterns, mistakes, and revision points.

## Run C++ files

```bash
./scripts/run_cpp_file.sh run manual/cpp/arrays/two_pointer_notes.cpp
```

If a file named `two_pointer_notes.txt` or `input.txt` exists beside the source file, it will be used as input automatically.
