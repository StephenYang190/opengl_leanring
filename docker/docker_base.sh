#!/usr/bin/env bash

function info() {
  (>&2 echo -e "[${WHITE}${BOLD}INFO${NO_COLOR}] $*")
}
function ok() {
  (>&2 echo -e "[${GREEN}${BOLD} OK ${NO_COLOR}] $*")
}
function error() {
  (>&2 echo -e "[${RED}ERROR${NO_COLOR}] $*")
}
# Base docker image name
MAIN_IMAGE="nvidia/opengl:1.0-glvnd-devel-ubuntu20.04"
# Container name
MAIN_CONTAINER_NAME="opengl_$USER"
# Work directory
WORKDIR="/xurban"
