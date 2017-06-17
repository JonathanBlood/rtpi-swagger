# Real Time Passenger Information (RTPI) Swagger

The swagger definition for Real Time Passenger Information can be found [here](swagger/swagger.yaml).

A swagger User Interface that is using the Swagger definition file can be seen here:

```bash
http://jonathanblood.net/rtpi/swagger/
```

Documentation for the Real Time Passenger Information can be found here:

```bash
http://jonathanblood.net/rtpi/documentation/#
```

## Generate RTPI SDK's
Download the latest version of the swagger codegen jar

```bash
$ wget https://oss.sonatype.org/content/repositories/releases/io/swagger/swagger-codegen-cli/<version>/swagger-codegen-cli-<version>.jar
$ wget https://oss.sonatype.org/content/repositories/releases/io/swagger/swagger-codegen-cli/2.2.1/swagger-codegen-cli-2.2.1.jar
$ mv swagger-codegen-cli-2.2.1.jar swagger-codegen-cli.jar
```

Run code gen jar to generate SDK's into the ```sdk``` directory:
```bash
$ java -jar swagger-codegen-cli.jar generate -i swagger/swagger.yaml -o sdk -l java
```

Generate SDK's for all languages:

```bash
$ ./generate_sdks.sh
```