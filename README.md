# File-Encryption-Decryption
🔐 File Encryption & Decryption System (C Project)

A simple and fast file encryption–decryption tool built in C using the XOR cipher.
This program works on any file type (text, images, PDFs, audio, etc.) by converting readable data into encrypted form and restoring it back when decrypted with the same key.

🚀 Features

Encrypt any file using XOR operation

Decrypt files using the same key

Works on binary files (images, pdfs, videos) as well

Lightweight, fast, and platform-independent

Simple menu-based interface

🛠 Technologies Used

Language: C

Compiler: GCC / Turbo C

OS: Windows / Linux / macOS

📌 How It Works

The program reads the file byte-by-byte.

Each byte is XORed with a user-provided key (0–255).

The process is reversible → applying XOR again with the same key decrypts the file.
