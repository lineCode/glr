#ifndef _GLR_TARGET_H_
#define _GLR_TARGET_H_

#include <GLES3/gl3.h>
#include <glib.h>

#include "glr-context.h"

typedef struct _GlrTarget GlrTarget;

GlrTarget *     glr_target_new             (GlrContext *context,
                                            guint32     width,
                                            guint32     height,
                                            guint8      msaa_samples);
GlrTarget *     glr_target_ref             (GlrTarget *self);
void            glr_target_unref           (GlrTarget *self);

GLuint          glr_target_get_framebuffer (GlrTarget *self);

void            glr_target_get_size        (GlrTarget *self,
                                            guint32   *width,
                                            guint32   *height);
void            glr_target_resize          (GlrTarget *self,
                                            guint      width,
                                            guint      height);

#endif /* _GLR_TARGET_H_ */
