#!/bin/bash

LANGUAGES=(
  "akka-scala"
  "android"
  "async-scala"
  "bash"
  "clojure"
  "cpprest"
  "csharp"
  "CsharpDotNet2"
  "cwiki"
  "dart"
  "dynamic-html"
  "elixir"
  "flash"
  "go"
  "groovy"
  "html"
  "html2"
  "java"
  "javascript"
  "javascript-closure-angular"
  "jaxrs-cxf-client"
  "jmeter"
  "objc"
  "perl"
  "php"
  "python"
  "qt5cpp"
  "ruby"
  "scala"
  "swagger"
  "swagger-yaml"
  "swift"
  "swift3"
  "tizen"
  "typescript-angular"
  "typescript-angular2"
  "typescript-fetch"
  "typescript-node"
)

rm -rf sdk/*
for i in "${LANGUAGES[@]}"
do
   mkdir -p sdk/$i/
   java -jar swagger-codegen-cli.jar generate -i swagger/swagger.yaml -o sdk/$i -l $i
   echo "SDK created in sdk/$i"
done