# Log Intrusion Detector (C)

A C-based log file parser that scans system logs for suspicious activity such as failed login attempts, detected attacks, and error events, and writes them to a separate output file.

## Features
- Detects failed login attempts
- Identifies attack-related log entries
- Captures error events
- Processes large log files efficiently using file I/O

## Example Log Entries Detected

2024-06-12 17:32:45 Failed login attempt from 34.56.93.143
2024-10-15 02:41:12 Attack detected from 45.87.178.23
2024-10-21 14:15:31 error while processing event


## Usage

Compile:
gcc log_parser.c -o log_parser

./log_parser input.log suspicious.log

Output
The program writes only suspicious log entries to the output file for further analysis.
