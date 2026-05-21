# `tcxx`

> Modern C++20 templated header library.

`tcxx` provides a modern C++ set of utilities for modern C++ projects.

---

## Features

- Modern C++20 codebase
- Docker-based reproducible development environment
- Automated local CI workflow
- Doxygen documentation generation
- Valgrind integration
- Coverage report generation

---

## Requirements

| Dependency | Version |
|---|---|
| GCC | 15+ |
| CMake | 3.20+ |
| Docker | Latest |

---

## Quick Start

### Build the Docker Image

```bash
cd ubuntu-resolute-gcc-15

docker build -t tcxx:1.0 .
```

---

### Launch the Development Container

Run the following command from the project root directory:

```bash
docker run \
    --name=ctcxx \
    --hostname=cypher \
    -v $PWD:/home/cxx-core \
    --net=host \
    --restart=no \
    -it tcxx:1.0 /bin/bash
```

---

## Build & Test

Inside the container:

```bash
cd /home/cxx-core

./local-ci.sh
```

The local CI pipeline performs the following tasks:

- Configure and build the project
- Execute unit tests
- Generate coverage reports
- Generate Doxygen documentation
- Execute Valgrind analysis

---

## Documentation & Reports

Generated artifacts are available under the `reports/` directory.

### Coverage Report

Open in your browser:

```text
reports/coverage_html/index.html
```

---

### Doxygen Documentation

Open in your browser:

```text
reports/html/index.html
```

---

### Valgrind Report

Open in your browser:

```text
reports/valgrind-report.html
```

---

## Project Structure

```text
.
├── include/                  # Public headers
├── tests/                    # Unit tests
├── reports/                  # Generated reports
├── ubuntu-resolute-gcc-15/   # Docker environment
├── docs/                     # Documentation
└── CMakeLists.txt
```

---

## Development Workflow

Recommended development workflow:

1. Build the Docker image
2. Launch the development container
3. Execute the local CI pipeline
4. Inspect generated reports and logs

---

## Design Goals

- Clean and maintainable C++20 architecture
- Reproducible builds and tooling
- Automated quality analysis

---

## Roadmap

- [ ] C++23 modules support

---

## License

Licensed under the MIT License.

See `LICENSE` for details.
