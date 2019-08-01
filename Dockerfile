# Build base image Ubuntu ver 16.04 and install build-essential
FROM ubuntu:16.04
RUN apt-get update
RUN apt-get install build-essential -y
COPY . 006_FRD_KL25Z
WORKDIR 006_FRD_KL25Z
