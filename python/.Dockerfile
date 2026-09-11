# This file is part of the SV-Benchmarks collection of verification tasks:
# https://github.com/sosy-lab/sv-benchmarks
#
# SPDX-FileCopyrightText: 2026 The SV-Benchmarks Community
#
# SPDX-License-Identifier: Apache-2.0

# This is a Docker image for running the checks for Python programs.
# It should be pushed to registry.gitlab.com/sosy-lab/benchmarking/sv-benchmarks/ci/python
# and will be used by CI as declared in .gitlab-ci.yml.
#
# Commands for updating the image:
# docker build --pull -t registry.gitlab.com/sosy-lab/benchmarking/sv-benchmarks/ci/python:latest - < .Dockerfile
# docker push registry.gitlab.com/sosy-lab/benchmarking/sv-benchmarks/ci/python

FROM ubuntu:bionic

RUN apt-get update && apt-get install -y \
  python3
