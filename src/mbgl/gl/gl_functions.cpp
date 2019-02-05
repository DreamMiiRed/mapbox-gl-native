#include <mbgl/gl/gl_functions.hpp>

#include <mbgl/platform/gl.hpp>
#include <mbgl/util/logging.hpp>

#include <mutex>

namespace mbgl {
namespace gl {

void (*GLFunctions::glActiveTexture)(GLenum);
void (*GLFunctions::glAttachShader)(GLuint, GLuint);
void (*GLFunctions::glBindAttribLocation)(GLuint, GLuint, const GLchar *);
void (*GLFunctions::glBindBuffer)(GLenum, GLuint);
void (*GLFunctions::glBindFramebuffer)(GLenum, GLuint);
void (*GLFunctions::glBindRenderbuffer)(GLenum, GLuint);
void (*GLFunctions::glBindTexture)(GLenum, GLuint);
void (*GLFunctions::glBlendColor)(GLfloat, GLfloat, GLfloat, GLfloat);
void (*GLFunctions::glBlendEquation)(GLenum);
void (*GLFunctions::glBlendEquationSeparate)(GLenum, GLenum);
void (*GLFunctions::glBlendFunc)(GLenum, GLenum);
void (*GLFunctions::glBlendFuncSeparate)(GLenum, GLenum, GLenum, GLenum);
void (*GLFunctions::glBufferData)(GLenum, GLsizeiptr, const void *, GLenum);
void (*GLFunctions::glBufferSubData)(GLenum, GLintptr, GLsizeiptr, const void *);
GLenum (*GLFunctions::glCheckFramebufferStatus)(GLenum);
void (*GLFunctions::glClear)(GLbitfield);
void (*GLFunctions::glClearColor)(GLfloat, GLfloat, GLfloat, GLfloat);
void (*GLFunctions::glClearDepthf)(GLfloat);
void (*GLFunctions::glClearStencil)(GLint);
void (*GLFunctions::glColorMask)(GLboolean, GLboolean, GLboolean, GLboolean);
void (*GLFunctions::glCompileShader)(GLuint);
void (*GLFunctions::glCompressedTexImage2D)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *);
void (*GLFunctions::glCompressedTexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *);
void (*GLFunctions::glCopyTexImage2D)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
void (*GLFunctions::glCopyTexSubImage2D)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
GLuint (*GLFunctions::glCreateProgram)();
GLuint (*GLFunctions::glCreateShader)(GLenum);
void (*GLFunctions::glCullFace)(GLenum);
void (*GLFunctions::glDeleteBuffers)(GLsizei, const GLuint *);
void (*GLFunctions::glDeleteFramebuffers)(GLsizei, const GLuint *);
void (*GLFunctions::glDeleteProgram)(GLuint);
void (*GLFunctions::glDeleteRenderbuffers)(GLsizei, const GLuint *);
void (*GLFunctions::glDeleteShader)(GLuint);
void (*GLFunctions::glDeleteTextures)(GLsizei, const GLuint *);
void (*GLFunctions::glDepthFunc)(GLenum);
void (*GLFunctions::glDepthMask)(GLboolean);
void (*GLFunctions::glDepthRangef)(GLfloat, GLfloat);
void (*GLFunctions::glDetachShader)(GLuint, GLuint);
void (*GLFunctions::glDisable)(GLenum);
void (*GLFunctions::glDisableVertexAttribArray)(GLuint);
void (*GLFunctions::glDrawArrays)(GLenum, GLint, GLsizei);
void (*GLFunctions::glDrawElements)(GLenum, GLsizei, GLenum, const void *);
void (*GLFunctions::glEnable)(GLenum);
void (*GLFunctions::glEnableVertexAttribArray)(GLuint);
void (*GLFunctions::glFinish)();
void (*GLFunctions::glFlush)();
void (*GLFunctions::glFramebufferRenderbuffer)(GLenum, GLenum, GLenum, GLuint);
void (*GLFunctions::glFramebufferTexture2D)(GLenum, GLenum, GLenum, GLuint, GLint);
void (*GLFunctions::glFrontFace)(GLenum);
void (*GLFunctions::glGenBuffers)(GLsizei, GLuint *);
void (*GLFunctions::glGenerateMipmap)(GLenum);
void (*GLFunctions::glGenFramebuffers)(GLsizei, GLuint *);
void (*GLFunctions::glGenRenderbuffers)(GLsizei, GLuint *);
void (*GLFunctions::glGenTextures)(GLsizei, GLuint *);
void (*GLFunctions::glGetActiveAttrib)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *);
void (*GLFunctions::glGetActiveUniform)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *);
void (*GLFunctions::glGetAttachedShaders)(GLuint, GLsizei, GLsizei *, GLuint *);
GLint (*GLFunctions::glGetAttribLocation)(GLuint, const GLchar *);
void (*GLFunctions::glGetBooleanv)(GLenum, GLboolean *);
void (*GLFunctions::glGetBufferParameteriv)(GLenum, GLenum, GLint *);
GLenum (*GLFunctions::glGetError)();
void (*GLFunctions::glGetFloatv)(GLenum, GLfloat *);
void (*GLFunctions::glGetFramebufferAttachmentParameteriv)(GLenum, GLenum, GLenum, GLint *);
void (*GLFunctions::glGetIntegerv)(GLenum, GLint *);
void (*GLFunctions::glGetProgramInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *);
void (*GLFunctions::glGetProgramiv)(GLuint, GLenum, GLint *);
void (*GLFunctions::glGetRenderbufferParameteriv)(GLenum, GLenum, GLint *);
void (*GLFunctions::glGetShaderInfoLog)(GLuint, GLsizei, GLsizei *, GLchar *);
void (*GLFunctions::glGetShaderiv)(GLuint, GLenum, GLint *);
void (*GLFunctions::glGetShaderSource)(GLuint, GLsizei, GLsizei *, GLchar *);
const GLubyte *(*GLFunctions::glGetString)(GLenum);
void (*GLFunctions::glGetTexParameterfv)(GLenum, GLenum, GLfloat *);
void (*GLFunctions::glGetTexParameteriv)(GLenum, GLenum, GLint *);
void (*GLFunctions::glGetUniformfv)(GLuint, GLint, GLfloat *);
void (*GLFunctions::glGetUniformiv)(GLuint, GLint, GLint *);
GLint (*GLFunctions::glGetUniformLocation)(GLuint, const GLchar *);
void (*GLFunctions::glGetVertexAttribfv)(GLuint, GLenum, GLfloat *);
void (*GLFunctions::glGetVertexAttribiv)(GLuint, GLenum, GLint *);
void (*GLFunctions::glGetVertexAttribPointerv)(GLuint, GLenum, void **);
void (*GLFunctions::glHint)(GLenum, GLenum);
GLboolean (*GLFunctions::glIsBuffer)(GLuint);
GLboolean (*GLFunctions::glIsEnabled)(GLenum);
GLboolean (*GLFunctions::glIsFramebuffer)(GLuint);
GLboolean (*GLFunctions::glIsProgram)(GLuint);
GLboolean (*GLFunctions::glIsRenderbuffer)(GLuint);
GLboolean (*GLFunctions::glIsShader)(GLuint);
GLboolean (*GLFunctions::glIsTexture)(GLuint);
void (*GLFunctions::glLineWidth)(GLfloat);
void (*GLFunctions::glLinkProgram)(GLuint);
void (*GLFunctions::glPixelStorei)(GLenum, GLint);
void (*GLFunctions::glPolygonOffset)(GLfloat, GLfloat);
void (*GLFunctions::glReadPixels)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *);
void (*GLFunctions::glRenderbufferStorage)(GLenum, GLenum, GLsizei, GLsizei);
void (*GLFunctions::glSampleCoverage)(GLfloat, GLboolean);
void (*GLFunctions::glScissor)(GLint, GLint, GLsizei, GLsizei);
void (*GLFunctions::glShaderSource)(GLuint, GLsizei, const GLchar * const*, const GLint *);
void (*GLFunctions::glStencilFunc)(GLenum, GLint, GLuint);
void (*GLFunctions::glStencilFuncSeparate)(GLenum, GLenum, GLint, GLuint);
void (*GLFunctions::glStencilMask)(GLuint);
void (*GLFunctions::glStencilMaskSeparate)(GLenum, GLuint);
void (*GLFunctions::glStencilOp)(GLenum, GLenum, GLenum);
void (*GLFunctions::glStencilOpSeparate)(GLenum, GLenum, GLenum, GLenum);
void (*GLFunctions::glTexImage2D)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *);
void (*GLFunctions::glTexParameterf)(GLenum, GLenum, GLfloat);
void (*GLFunctions::glTexParameterfv)(GLenum, GLenum, const GLfloat *);
void (*GLFunctions::glTexParameteri)(GLenum, GLenum, GLint);
void (*GLFunctions::glTexParameteriv)(GLenum, GLenum, const GLint *);
void (*GLFunctions::glTexSubImage2D)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *);
void (*GLFunctions::glUniform1f)(GLint, GLfloat);
void (*GLFunctions::glUniform1fv)(GLint, GLsizei, const GLfloat *);
void (*GLFunctions::glUniform1i)(GLint, GLint);
void (*GLFunctions::glUniform1iv)(GLint, GLsizei, const GLint *);
void (*GLFunctions::glUniform2f)(GLint, GLfloat, GLfloat);
void (*GLFunctions::glUniform2fv)(GLint, GLsizei, const GLfloat *);
void (*GLFunctions::glUniform2i)(GLint, GLint, GLint);
void (*GLFunctions::glUniform2iv)(GLint, GLsizei, const GLint *);
void (*GLFunctions::glUniform3f)(GLint, GLfloat, GLfloat, GLfloat);
void (*GLFunctions::glUniform3fv)(GLint, GLsizei, const GLfloat *);
void (*GLFunctions::glUniform3i)(GLint, GLint, GLint, GLint);
void (*GLFunctions::glUniform3iv)(GLint, GLsizei, const GLint *);
void (*GLFunctions::glUniform4f)(GLint, GLfloat, GLfloat, GLfloat, GLfloat);
void (*GLFunctions::glUniform4fv)(GLint, GLsizei, const GLfloat *);
void (*GLFunctions::glUniform4i)(GLint, GLint, GLint, GLint, GLint);
void (*GLFunctions::glUniform4iv)(GLint, GLsizei, const GLint *);
void (*GLFunctions::glUniformMatrix2fv)(GLint, GLsizei, GLboolean, const GLfloat *);
void (*GLFunctions::glUniformMatrix3fv)(GLint, GLsizei, GLboolean, const GLfloat *);
void (*GLFunctions::glUniformMatrix4fv)(GLint, GLsizei, GLboolean, const GLfloat *);
void (*GLFunctions::glUseProgram)(GLuint);
void (*GLFunctions::glValidateProgram)(GLuint);
void (*GLFunctions::glVertexAttrib1f)(GLuint, GLfloat);
void (*GLFunctions::glVertexAttrib1fv)(GLuint, const GLfloat *);
void (*GLFunctions::glVertexAttrib2f)(GLuint, GLfloat, GLfloat);
void (*GLFunctions::glVertexAttrib2fv)(GLuint, const GLfloat *);
void (*GLFunctions::glVertexAttrib3f)(GLuint, GLfloat, GLfloat, GLfloat);
void (*GLFunctions::glVertexAttrib3fv)(GLuint, const GLfloat *);
void (*GLFunctions::glVertexAttrib4f)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
void (*GLFunctions::glVertexAttrib4fv)(GLuint, const GLfloat *);
void (*GLFunctions::glVertexAttribPointer)(GLuint, GLint, GLenum, GLboolean, GLsizei, const void *);
void (*GLFunctions::glViewport)(GLint, GLint, GLsizei, GLsizei);

#ifndef MBGL_USE_GLES2
void (*GLFunctions::glDrawPixels)(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
void (*GLFunctions::glGetDoublev)(GLenum, GLdouble *);
void (*GLFunctions::glPixelTransferf)(GLenum, GLfloat);
void (*GLFunctions::glPixelZoom)(GLfloat, GLfloat);
void (*GLFunctions::glPointSize)(GLfloat);
void (*GLFunctions::glRasterPos4d)(GLdouble, GLdouble, GLdouble, GLdouble);
#endif

void GLFunctions::init() {
    static std::mutex mutex;
    std::lock_guard<std::mutex> lock(mutex);

    if (glActiveTexture) {
        return;
    }

    auto fps = platform::getGLFunctionPointers();

    glActiveTexture = fps.glActiveTexture;
    glAttachShader = fps.glAttachShader;
    glBindAttribLocation = fps.glBindAttribLocation;
    glBindBuffer = fps.glBindBuffer;
    glBindFramebuffer = fps.glBindFramebuffer;
    glBindRenderbuffer = fps.glBindRenderbuffer;
    glBindTexture = fps.glBindTexture;
    glBlendColor = fps.glBlendColor;
    glBlendEquation = fps.glBlendEquation;
    glBlendEquationSeparate = fps.glBlendEquationSeparate;
    glBlendFunc = fps.glBlendFunc;
    glBlendFuncSeparate = fps.glBlendFuncSeparate;
    glBufferData = fps.glBufferData;
    glBufferSubData = fps.glBufferSubData;
    glCheckFramebufferStatus = fps.glCheckFramebufferStatus;
    glClear = fps.glClear;
    glClearColor = fps.glClearColor;
    glClearDepthf = fps.glClearDepthf;
    glClearStencil = fps.glClearStencil;
    glColorMask = fps.glColorMask;
    glCompileShader = fps.glCompileShader;
    glCompressedTexImage2D = fps.glCompressedTexImage2D;
    glCompressedTexSubImage2D = fps.glCompressedTexSubImage2D;
    glCopyTexImage2D = fps.glCopyTexImage2D;
    glCopyTexSubImage2D = fps.glCopyTexSubImage2D;
    glCreateProgram = fps.glCreateProgram;
    glCreateShader = fps.glCreateShader;
    glCullFace = fps.glCullFace;
    glDeleteBuffers = fps.glDeleteBuffers;
    glDeleteFramebuffers = fps.glDeleteFramebuffers;
    glDeleteProgram = fps.glDeleteProgram;
    glDeleteRenderbuffers = fps.glDeleteRenderbuffers;
    glDeleteShader = fps.glDeleteShader;
    glDeleteTextures = fps.glDeleteTextures;
    glDepthFunc = fps.glDepthFunc;
    glDepthMask = fps.glDepthMask;
    glDepthRangef = fps.glDepthRangef;
    glDetachShader = fps.glDetachShader;
    glDisable = fps.glDisable;
    glDisableVertexAttribArray = fps.glDisableVertexAttribArray;
    glDrawArrays = fps.glDrawArrays;
    glDrawElements = fps.glDrawElements;
    glEnable = fps.glEnable;
    glEnableVertexAttribArray = fps.glEnableVertexAttribArray;
    glFinish = fps.glFinish;
    glFlush = fps.glFlush;
    glFramebufferRenderbuffer = fps.glFramebufferRenderbuffer;
    glFramebufferTexture2D = fps.glFramebufferTexture2D;
    glFrontFace = fps.glFrontFace;
    glGenBuffers = fps.glGenBuffers;
    glGenerateMipmap = fps.glGenerateMipmap;
    glGenFramebuffers = fps.glGenFramebuffers;
    glGenRenderbuffers = fps.glGenRenderbuffers;
    glGenTextures = fps.glGenTextures;
    glGetActiveAttrib = fps.glGetActiveAttrib;
    glGetActiveUniform = fps.glGetActiveUniform;
    glGetAttachedShaders = fps.glGetAttachedShaders;
    glGetAttribLocation = fps.glGetAttribLocation;
    glGetBooleanv = fps.glGetBooleanv;
    glGetBufferParameteriv = fps.glGetBufferParameteriv;
    glGetError = fps.glGetError;
    glGetFloatv = fps.glGetFloatv;
    glGetFramebufferAttachmentParameteriv = fps.glGetFramebufferAttachmentParameteriv;
    glGetIntegerv = fps.glGetIntegerv;
    glGetProgramInfoLog = fps.glGetProgramInfoLog;
    glGetProgramiv = fps.glGetProgramiv;
    glGetRenderbufferParameteriv = fps.glGetRenderbufferParameteriv;
    glGetShaderInfoLog = fps.glGetShaderInfoLog;
    glGetShaderiv = fps.glGetShaderiv;
    glGetShaderSource = fps.glGetShaderSource;
    glGetString = fps.glGetString;
    glGetTexParameterfv = fps.glGetTexParameterfv;
    glGetTexParameteriv = fps.glGetTexParameteriv;
    glGetUniformfv = fps.glGetUniformfv;
    glGetUniformiv = fps.glGetUniformiv;
    glGetUniformLocation = fps.glGetUniformLocation;
    glGetVertexAttribfv = fps.glGetVertexAttribfv;
    glGetVertexAttribiv = fps.glGetVertexAttribiv;
    glGetVertexAttribPointerv = fps.glGetVertexAttribPointerv;
    glHint = fps.glHint;
    glIsBuffer = fps.glIsBuffer;
    glIsEnabled = fps.glIsEnabled;
    glIsFramebuffer = fps.glIsFramebuffer;
    glIsProgram = fps.glIsProgram;
    glIsRenderbuffer = fps.glIsRenderbuffer;
    glIsShader = fps.glIsShader;
    glIsTexture = fps.glIsTexture;
    glLineWidth = fps.glLineWidth;
    glLinkProgram = fps.glLinkProgram;
    glPixelStorei = fps.glPixelStorei;
    glPolygonOffset = fps.glPolygonOffset;
    glReadPixels = fps.glReadPixels;
    glRenderbufferStorage = fps.glRenderbufferStorage;
    glSampleCoverage = fps.glSampleCoverage;
    glScissor = fps.glScissor;
    glShaderSource = fps.glShaderSource;
    glStencilFunc = fps.glStencilFunc;
    glStencilFuncSeparate = fps.glStencilFuncSeparate;
    glStencilMask = fps.glStencilMask;
    glStencilMaskSeparate = fps.glStencilMaskSeparate;
    glStencilOp = fps.glStencilOp;
    glStencilOpSeparate = fps.glStencilOpSeparate;
    glTexImage2D = fps.glTexImage2D;
    glTexParameterf = fps.glTexParameterf;
    glTexParameterfv = fps.glTexParameterfv;
    glTexParameteri = fps.glTexParameteri;
    glTexParameteriv = fps.glTexParameteriv;
    glTexSubImage2D = fps.glTexSubImage2D;
    glUniform1f = fps.glUniform1f;
    glUniform1fv = fps.glUniform1fv;
    glUniform1i = fps.glUniform1i;
    glUniform1iv = fps.glUniform1iv;
    glUniform2f = fps.glUniform2f;
    glUniform2fv = fps.glUniform2fv;
    glUniform2i = fps.glUniform2i;
    glUniform2iv = fps.glUniform2iv;
    glUniform3f = fps.glUniform3f;
    glUniform3fv = fps.glUniform3fv;
    glUniform3i = fps.glUniform3i;
    glUniform3iv = fps.glUniform3iv;
    glUniform4f = fps.glUniform4f;
    glUniform4fv = fps.glUniform4fv;
    glUniform4i = fps.glUniform4i;
    glUniform4iv = fps.glUniform4iv;
    glUniformMatrix2fv = fps.glUniformMatrix2fv;
    glUniformMatrix3fv = fps.glUniformMatrix3fv;
    glUniformMatrix4fv = fps.glUniformMatrix4fv;
    glUseProgram = fps.glUseProgram;
    glValidateProgram = fps.glValidateProgram;
    glVertexAttrib1f = fps.glVertexAttrib1f;
    glVertexAttrib1fv = fps.glVertexAttrib1fv;
    glVertexAttrib2f = fps.glVertexAttrib2f;
    glVertexAttrib2fv = fps.glVertexAttrib2fv;
    glVertexAttrib3f = fps.glVertexAttrib3f;
    glVertexAttrib3fv = fps.glVertexAttrib3fv;
    glVertexAttrib4f = fps.glVertexAttrib4f;
    glVertexAttrib4fv = fps.glVertexAttrib4fv;
    glVertexAttribPointer = fps.glVertexAttribPointer;
    glViewport = fps.glViewport;

#ifndef MBGL_USE_GLES2
    glDrawPixels = fps.glDrawPixels;
    glGetDoublev = fps.glGetDoublev;
    glPixelTransferf = fps.glPixelTransferf;
    glPixelZoom = fps.glPixelZoom;
    glPointSize = fps.glPointSize;
    glRasterPos4d = fps.glRasterPos4d;
#endif
}

#ifndef NDEBUG
void GLFunctions::checkError(const char* cmd, const char* file, int line) {
    if (GLenum err = glGetError()) {
        Log::Warning(Event::OpenGL, "Error %d: %s - %s:%d", err, cmd, file, line);
    }
}
#endif

GLFunctions::GLFunctions() {
    init();
}

}  // namespace gl
}  // namespace mbgl
