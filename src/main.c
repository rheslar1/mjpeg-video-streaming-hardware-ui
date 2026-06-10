#include <stdio.h>
#include <stddef.h>

typedef struct {
  const char *title;
  const char *summary;
  const char *evidence_target;
  const char *tags[8];
  size_t tag_count;
} project_profile_t;

static const project_profile_t profile = {
  "MJPEG Video Streaming Server with Hardware UI",
  "V4L2 camera project that captures snapshots, records raw video, streams MJPEG over a local HTTP server, and maps physical buttons into UI actions.",
  "High-bandwidth peripheral handling, media pipeline design, local network streaming, and physical UI integration.",
  {
  "V4L2",
  "MJPEG",
  "HTTP server",
  "CSI camera",
  "GPIO buttons",
  "Hardware UI"
  },
  6u
};

int main(void) {
  printf("%s\n", profile.title);
  printf("Summary: %s\n", profile.summary);
  printf("Evidence target: %s\n", profile.evidence_target);
  printf("Stack:");

  for (size_t index = 0; index < profile.tag_count; ++index) {
    printf(" %s%s", profile.tags[index], index + 1u == profile.tag_count ? "" : ",");
  }

  printf("\n");
  return 0;
}
