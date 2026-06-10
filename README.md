# MJPEG Video Streaming Server with Hardware UI

V4L2 camera project that captures snapshots, records raw video, streams MJPEG over a local HTTP server, and maps physical buttons into UI actions.

## Portfolio Purpose

This repository is an Embedded Systems project scaffold for the Rheslar portfolio. It is designed to become a hardware-backed project with build output, validation logs, and reviewable implementation evidence.

## Stack

- V4L2
- MJPEG
- HTTP server
- CSI camera
- GPIO buttons
- Hardware UI

## Quick Start

```bash
cmake -S . -B build
cmake --build build
./build/mjpeg_video_streaming_hardware_ui
python -m unittest discover -s tests
```

## Implementation Slices

- Native starter executable that exposes the project identity, stack, and validation target.
- Architecture document with control boundaries, data flow, safety assumptions, and evidence plan.
- Unit smoke test that keeps source, docs, and CI files present as the repo grows.
- GitHub Actions workflow for configure, build, executable smoke run, and repository validation.

## Evidence Target

High-bandwidth peripheral handling, media pipeline design, local network streaming, and physical UI integration.

## Remote

Intended public repository: https://github.com/rheslar1/mjpeg-video-streaming-hardware-ui
