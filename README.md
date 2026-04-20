# DSA C++

This repo now supports both of these workflows in the same GitHub repository:

- LeetCode problem folders at the repo root, like `0001-two-sum/`
- Manual C++ practice code inside `manual/cpp/`

That matches the GitHub layout in your example while still giving you a clean place for your own handwritten DSA code.

## Recommended layout

- `0001-two-sum/`
  A LeetCode-style problem folder with files like `0001-two-sum.cpp` and `README.md`
- `manual/cpp/`
  Your own C++ topic-wise or practice-wise files
- `build/`
  Compiled binaries created by local scripts
- `scripts/run_cpp_file.sh`
  Compile or run the current `.cpp` file
- `scripts/new_leetcode_problem.sh`
  Create a LeetCode-style problem folder manually
- `scripts/new_manual_cpp.sh`
  Create a new manual C++ file quickly

## Daily workflow

### LeetCode sync to GitHub

This repo includes a GitHub Actions workflow in `.github/workflows/sync-leetcode.yml` that can sync accepted LeetCode submissions directly into this repo as root-level problem folders. That gives you the same style as:

- `0001-two-sum/`
- `0003-longest-substring-without-repeating-characters/`

To enable it:

1. Log in to LeetCode in your browser.
2. Open DevTools and copy the `csrftoken` and `LEETCODE_SESSION` cookie values.
3. In your GitHub repo, add them as repository secrets:
   - `LEETCODE_CSRF_TOKEN`
   - `LEETCODE_SESSION`
4. In GitHub repo settings, make sure Actions has read and write permission.
5. Run the `Sync LeetCode` workflow once from the `Actions` tab.

Important:

- Do not share your LeetCode password with me.
- If you need help finding the two cookie values, I can walk you through it safely.

If you want to create a root-style problem folder manually first, run:

```bash
./scripts/new_leetcode_problem.sh 1 two-sum
```

That creates:

- `0001-two-sum/0001-two-sum.cpp`
- `0001-two-sum/README.md`

### Manual C++ practice

Create a file anywhere under `manual/cpp/` with:

```bash
./scripts/new_manual_cpp.sh arrays/two_sum_practice
```

That creates:

- `manual/cpp/arrays/two_sum_practice.cpp`
- `manual/cpp/arrays/two_sum_practice.txt`

## Running code

Open any `.cpp` file in VS Code and run the default build task, or use:

```bash
./scripts/run_cpp_file.sh run manual/cpp/arrays/two_sum_practice.cpp
```

The runner also supports the older `problems/` layout already present in this repo.

## Notes

- `manual/cpp/` is the safest place for your own code.
- Root-level numbered folders are ideal for LeetCode sync tools and match the GitHub layout in your screenshot.
- The existing `problems/`, `inputs/`, and `outputs/` folders are kept as legacy content so nothing breaks.
- The LeetCode sync workflow only needs the two cookie values stored as GitHub secrets. It does not need your password in the repo.
