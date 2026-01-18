# Log Intrusion Detector (C)

## Overview
This project is a simple log file parser written in C that detects and extracts
potentially suspicious activity from system log files. It scans logs for
specific keywords such as failed login attempts and errors, then writes the
matching entries to a separate output file.

This project demonstrates file handling, string processing, and basic intrusion
detection concepts using C.

---

## Features
- Reads log files line by line
- Detects suspicious entries containing:
  - `Failed login`
  - `error`
- Writes matched lines to an output file
- Handles file input/output errors safely

---

## Files
- `parser.c` — Core log parsing and filtering logic
- `sample_log_file.txt` — Example log file for testing
- `README.md` — Project documentation

---

## Compilation
Compile the program using GCC:

## bash
gcc parser.c -o log_parser

## Usage
Run the parser with an input log file and an output file:

## bash
./log_parser sample_log_file.txt suspicious_output.txt

Example

Input log line:

2024-06-12 17:32:45 Failed login attempt from 34.56.93.143

Output:

2024-06-12 17:32:45 Failed login attempt from 34.56.93.143
