#!/bin/bash

files=("imu_multi.v" "pll.v" "particle.v" "physics.v" "spi.v" "ws2812.v" "library.v" "ChipInterface.v" "imu_multi.sv" "pll.sv" "particle.sv" "physics.sv" "spi.sv" "ws2812.sv" "library.sv" "ChipInterface.sv")

target_dir="../TinyTapeout/"

for file in "${files[@]}"; do
    if [[ -f "$file" ]]; then
        mv "$file" "$target_dir"
        echo "Moved $file to $target_dir"
    else
        echo "File $file not found, skipping."
    fi
done
