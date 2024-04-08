#!/bin/bash

# This 'generate_cc_arrays.py' script is very cursed.

#rm micro/examples/hello_world/models/*.cc
#rm micro/examples/hello_world/models/*.h
for model in micro/examples/hello_world/models/*.tflite; do
    echo "Processing ${model}!"
    $(python3 ./micro/tools/generate_cc_arrays.py . "${model}")
done
