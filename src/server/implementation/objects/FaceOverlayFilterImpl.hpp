/* Autogenerated with kurento-module-creator */

#ifndef __FACE_OVERLAY_FILTER_IMPL_HPP__
#define __FACE_OVERLAY_FILTER_IMPL_HPP__

#include "FilterImpl.hpp"
#include "FaceOverlayFilter.hpp"
#include <EventHandler.hpp>

namespace kurento
{

class MediaPipeline;
class FaceOverlayFilterImpl;

void Serialize (std::shared_ptr<FaceOverlayFilterImpl> &object,
                JsonSerializer &serializer);

class FaceOverlayFilterImpl : public FilterImpl,
  public virtual FaceOverlayFilter
{

public:

  FaceOverlayFilterImpl (const boost::property_tree::ptree &conf,
                         std::shared_ptr<MediaPipeline> mediaPipeline);

  virtual ~FaceOverlayFilterImpl () {};

  void unsetOverlayedImage ();
  void setOverlayedImage (const std::string &uri, float offsetXPercent,
                          float offsetYPercent, float widthPercent, float heightPercent);

  /* Next methods are automatically implemented by code generator */
  virtual bool connect (const std::string &eventType,
                        std::shared_ptr<EventHandler> handler);

  virtual void invoke (std::shared_ptr<MediaObjectImpl> obj,
                       const std::string &methodName, const Json::Value &params,
                       Json::Value &response);

  virtual void Serialize (JsonSerializer &serializer);

private:
  GstElement *faceOverlay = NULL;

  class StaticConstructor
  {
  public:
    StaticConstructor();
  };

  static StaticConstructor staticConstructor;

};

} /* kurento */

#endif /*  __FACE_OVERLAY_FILTER_IMPL_HPP__ */
