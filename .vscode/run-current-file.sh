#!/usr/bin/env bash

set -e

source_file="$1"
output_file="$2"

case "$source_file" in
  *.cpp|*.cc|*.cxx)
    exec /usr/bin/g++ -std=c++17 -g -Wall -Wextra "$source_file" -o "$output_file"
    ;;
  *.py)
    exec /home/codespace/.python/current/bin/python3 "$source_file"
    ;;
  *)
    echo "지원하지 않는 파일 형식: $source_file" >&2
    exit 2
    ;;
esac
