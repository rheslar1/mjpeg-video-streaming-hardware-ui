#include <array>
#include <cassert>
#include <string_view>

class IReadinessRule {
 public:
  virtual ~IReadinessRule() = default;
  virtual bool passes(std::string_view evidenceTarget) const = 0;
};

class RequiredEvidenceRule final : public IReadinessRule {
 public:
  bool passes(std::string_view evidenceTarget) const override {
    return !evidenceTarget.empty();
  }
};

struct ProjectProfile {
  std::string_view title;
  std::string_view summary;
  std::string_view evidenceTarget;
  std::array<std::string_view, 9> tags;
};

constexpr ProjectProfile profile{
  "MJPEG Video Streaming Server with Hardware UI",
  "V4L2 camera project that captures snapshots, records raw video, streams MJPEG over a local HTTP server, and maps physical buttons into UI actions.",
  "High-bandwidth peripheral handling, media pipeline design, local network streaming, and physical UI integration.",
  {
    "C++17",
    "C++ Design Patterns",
    "SOLID",
    "V4L2",
    "MJPEG",
    "HTTP server",
    "CSI camera",
    "GPIO buttons",
    "Hardware UI"
  }
};

int main() {
  const RequiredEvidenceRule rule;
  assert(!profile.title.empty());
  assert(!profile.summary.empty());
  assert(rule.passes(profile.evidenceTarget));
  assert(profile.tags[0] == "C++17");
  return 0;
}
