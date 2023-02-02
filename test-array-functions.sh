#! /bin/bash

if ! [[ -x array-functions ]]; then
    echo "program array-functions executable does not exist"
    exit 1
fi

tester/run-tests.sh -d tests-array-functions
