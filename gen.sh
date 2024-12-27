

openapi-generator generate -i spec/openapi.24.05.3.json  -g cpp-qt-client --additional-properties cppNamespace=hm:slurm:client --package-name slurmrestapi -o ./

