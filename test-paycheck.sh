#! /bin/bash

if ! [[ -x paycheck ]]; then
    echo "program paycheck executable does not exist"
    exit 1
fi

tester/run-tests.sh -d tests-paycheck
