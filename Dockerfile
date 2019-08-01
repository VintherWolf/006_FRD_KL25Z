FROM ubuntu
RUN apt-get install build-essential -y
COPY . 006_FRD_KL25Z
WORKDIR 006_FRD_KL25Z