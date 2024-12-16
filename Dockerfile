FROM gcc:latest

WORKDIR /usr/src/app

COPY . .

RUN gcc -o sp_project sp_project.c

CMD ["./sp_project"]
