# 🚀 Basic C++ Projects (with a bit of animation!)

<p align="center">
  <!-- Animated banner (external GIF) -->
  <img alt="animated banner" src="https://media.giphy.com/media/3o7aD2saalBwwftBIY/giphy.gif" width="720"/>
</p>

> A small collection of beginner-friendly C/C++ examples and exercises — now with flair.  
> This README includes an animated banner and a simple in-terminal ASCII animation demo you can run locally.

---

## 📂 What's in this repo

- `hello_world.cpp` — classic Hello World.
- `calculator.cpp` — simple console calculator.
- `sorting_examples/` — implementations of bubble, selection and insertion sorts.
- `animation_demo/` — a tiny C program that prints an ASCII spinner animation.
- `README.md` — this file.

> (If your actual repo has different filenames, replace the file list above with your files.)

---

## ✨ Animated demo — run locally

If you want an in-repo animation that runs in your terminal, use the `animation_demo` program included here.

### animation_demo/demo.c
```c
/* Small ASCII spinner demo */
#include <stdio.h>
#include <unistd.h>

int main() {
    const char *frames = "|/-\\";
    for (int i = 0; i < 80; ++i) {
        putchar('\r');
        putchar(frames[i % 4]);
        fflush(stdout);
        usleep(80000); /* 80ms */
    }
    putchar('\n');
    return 0;
}
