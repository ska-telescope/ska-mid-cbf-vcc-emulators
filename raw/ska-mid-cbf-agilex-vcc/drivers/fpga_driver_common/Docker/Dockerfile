FROM python:3.10.9

RUN apt-get update && \
    apt-get install -y \
    g++-aarch64-linux-gnu \
    cmake \
    build-essential \ 
    cmake \
    tar \
    && rm -rf /var/lib/apt/lists*

RUN pip install pybind11

WORKDIR /app

COPY . /app/

CMD ["bash"]