FROM nvidia/opengl:1.2-glvnd-devel-ubuntu20.04

COPY setup_vtk_pcl.sh /tmp/

RUN sed -i s@/archive.ubuntu.com/@/mirrors.aliyun.com/@g /etc/apt/sources.list && \
    sed -i s@/security.ubuntu.com/@/mirrors.aliyun.com/@g /etc/apt/sources.list && \
    DEBIAN_FRONTEND=noninteractive apt update && \
    DEBIAN_FRONTEND=noninteractive apt install -y --no-install-recommends \
                cmake \
                git \
                build-essential \
                sudo \
                ca-certificates \
                gdb \
                xorg-dev \
                && \
    bash /tmp/setup_vtk_pcl.sh && \
    DEBIAN_FRONTEND=noninteractive apt purge --autoremove -y wget && \
    rm -rf /var/lib/apt/lists/*