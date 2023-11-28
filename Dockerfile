FROM alpine:latest

WORKDIR /hello-docker

COPY main.cpp main.cpp

RUN apk add g++

RUN g++ main.cpp -o main

ENTRYPOINT [ "./main" ]

