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
MAIN_IMAGE="hub.autox.tech/longxinchen/qt-visualizer:pcl-1_9-vtk-7.1"
# Container name
MAIN_CONTAINER_NAME="pcl_qt_$USER"
# Work directory
WORKDIR="/xurban"
