#include <glbinding/gl/functions45.h>

#include <glbinding/Binding.h>


namespace gl45
{

void glAccum(GLenum op, GLfloat value)
{
    return glbinding::Binding::Accum(op, value);
}

void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return glbinding::Binding::ActiveShaderProgram(pipeline, program);
}

void glActiveTexture(GLenum texture)
{
    return glbinding::Binding::ActiveTexture(texture);
}

void glAlphaFunc(GLenum func, GLfloat ref)
{
    return glbinding::Binding::AlphaFunc(func, ref);
}

GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return glbinding::Binding::AreTexturesResident(n, textures, residences);
}

void glArrayElement(GLint i)
{
    return glbinding::Binding::ArrayElement(i);
}

void glAttachShader(GLuint program, GLuint shader)
{
    return glbinding::Binding::AttachShader(program, shader);
}

void glBegin(GLenum mode)
{
    return glbinding::Binding::Begin(mode);
}

void glBeginConditionalRender(GLuint id, GLenum mode)
{
    return glbinding::Binding::BeginConditionalRender(id, mode);
}

void glBeginQuery(GLenum target, GLuint id)
{
    return glbinding::Binding::BeginQuery(target, id);
}

void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id)
{
    return glbinding::Binding::BeginQueryIndexed(target, index, id);
}

void glBeginTransformFeedback(GLenum primitiveMode)
{
    return glbinding::Binding::BeginTransformFeedback(primitiveMode);
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return glbinding::Binding::BindAttribLocation(program, index, name);
}

void glBindBuffer(GLenum target, GLuint buffer)
{
    return glbinding::Binding::BindBuffer(target, buffer);
}

void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return glbinding::Binding::BindBufferBase(target, index, buffer);
}

void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::BindBufferRange(target, index, buffer, offset, size);
}

void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint * buffers)
{
    return glbinding::Binding::BindBuffersBase(target, first, count, buffers);
}

void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes)
{
    return glbinding::Binding::BindBuffersRange(target, first, count, buffers, offsets, sizes);
}

void glBindFragDataLocation(GLuint program, GLuint color, const GLchar * name)
{
    return glbinding::Binding::BindFragDataLocation(program, color, name);
}

void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
    return glbinding::Binding::BindFragDataLocationIndexed(program, colorNumber, index, name);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return glbinding::Binding::BindFramebuffer(target, framebuffer);
}

void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
    return glbinding::Binding::BindImageTexture(unit, texture, level, layered, layer, access, format);
}

void glBindImageTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return glbinding::Binding::BindImageTextures(first, count, textures);
}

void glBindProgramPipeline(GLuint pipeline)
{
    return glbinding::Binding::BindProgramPipeline(pipeline);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return glbinding::Binding::BindRenderbuffer(target, renderbuffer);
}

void glBindSampler(GLuint unit, GLuint sampler)
{
    return glbinding::Binding::BindSampler(unit, sampler);
}

void glBindSamplers(GLuint first, GLsizei count, const GLuint * samplers)
{
    return glbinding::Binding::BindSamplers(first, count, samplers);
}

void glBindTexture(GLenum target, GLuint texture)
{
    return glbinding::Binding::BindTexture(target, texture);
}

void glBindTextureUnit(GLuint unit, GLuint texture)
{
    return glbinding::Binding::BindTextureUnit(unit, texture);
}

void glBindTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return glbinding::Binding::BindTextures(first, count, textures);
}

void glBindTransformFeedback(GLenum target, GLuint id)
{
    return glbinding::Binding::BindTransformFeedback(target, id);
}

void glBindVertexArray(GLuint array)
{
    return glbinding::Binding::BindVertexArray(array);
}

void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glbinding::Binding::BindVertexBuffer(bindingindex, buffer, offset, stride);
}

void glBindVertexBuffers(GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
    return glbinding::Binding::BindVertexBuffers(first, count, buffers, offsets, strides);
}

void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
    return glbinding::Binding::Bitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::Binding::BlendColor(red, green, blue, alpha);
}

void glBlendEquation(GLenum mode)
{
    return glbinding::Binding::BlendEquation(mode);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::Binding::BlendEquationSeparate(modeRGB, modeAlpha);
}

void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glbinding::Binding::BlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

void glBlendEquationi(GLuint buf, GLenum mode)
{
    return glbinding::Binding::BlendEquationi(buf, mode);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return glbinding::Binding::BlendFunc(sfactor, dfactor);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glbinding::Binding::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glbinding::Binding::BlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
{
    return glbinding::Binding::BlendFunci(buf, src, dst);
}

void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glbinding::Binding::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glbinding::Binding::BlitNamedFramebuffer(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return glbinding::Binding::BufferData(target, size, data, usage);
}

void glBufferStorage(GLenum target, GLsizeiptr size, const void * data, BufferStorageMask flags)
{
    return glbinding::Binding::BufferStorage(target, size, data, flags);
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glbinding::Binding::BufferSubData(target, offset, size, data);
}

void glCallList(GLuint list)
{
    return glbinding::Binding::CallList(list);
}

void glCallLists(GLsizei n, GLenum type, const void * lists)
{
    return glbinding::Binding::CallLists(n, type, lists);
}

GLenum glCheckFramebufferStatus(GLenum target)
{
    return static_cast<gl45::GLenum>(glbinding::Binding::CheckFramebufferStatus(target));
}

GLenum glCheckNamedFramebufferStatus(GLuint framebuffer, GLenum target)
{
    return static_cast<gl45::GLenum>(glbinding::Binding::CheckNamedFramebufferStatus(framebuffer, target));
}

void glClampColor(GLenum target, GLenum clamp)
{
    return glbinding::Binding::ClampColor(target, clamp);
}

void glClear(ClearBufferMask mask)
{
    return glbinding::Binding::Clear(mask);
}

void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::Binding::ClearAccum(red, green, blue, alpha);
}

void glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearBufferData(target, internalformat, format, type, data);
}

void glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearBufferSubData(target, internalformat, offset, size, format, type, data);
}

void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return glbinding::Binding::ClearBufferfi(buffer, drawbuffer, depth, stencil);
}

void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return glbinding::Binding::ClearBufferfv(buffer, drawbuffer, value);
}

void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return glbinding::Binding::ClearBufferiv(buffer, drawbuffer, value);
}

void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return glbinding::Binding::ClearBufferuiv(buffer, drawbuffer, value);
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::Binding::ClearColor(red, green, blue, alpha);
}

void glClearDepth(GLdouble depth)
{
    return glbinding::Binding::ClearDepth(depth);
}

void glClearDepthf(GLfloat d)
{
    return glbinding::Binding::ClearDepthf(d);
}

void glClearIndex(GLfloat c)
{
    return glbinding::Binding::ClearIndex(c);
}

void glClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearNamedBufferData(buffer, internalformat, format, type, data);
}

void glClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearNamedBufferSubData(buffer, internalformat, offset, size, format, type, data);
}

void glClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, const GLfloat depth, GLint stencil)
{
    return glbinding::Binding::ClearNamedFramebufferfi(framebuffer, buffer, depth, stencil);
}

void glClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return glbinding::Binding::ClearNamedFramebufferfv(framebuffer, buffer, drawbuffer, value);
}

void glClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return glbinding::Binding::ClearNamedFramebufferiv(framebuffer, buffer, drawbuffer, value);
}

void glClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return glbinding::Binding::ClearNamedFramebufferuiv(framebuffer, buffer, drawbuffer, value);
}

void glClearStencil(GLint s)
{
    return glbinding::Binding::ClearStencil(s);
}

void glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearTexImage(texture, level, format, type, data);
}

void glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data)
{
    return glbinding::Binding::ClearTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

void glClientActiveTexture(GLenum texture)
{
    return glbinding::Binding::ClientActiveTexture(texture);
}

GLenum glClientWaitSync(GLsync sync, SyncObjectMask flags, GLuint64 timeout)
{
    return static_cast<gl45::GLenum>(glbinding::Binding::ClientWaitSync(sync, flags, timeout));
}

void glClipControl(GLenum origin, GLenum depth)
{
    return glbinding::Binding::ClipControl(origin, depth);
}

void glClipPlane(GLenum plane, const GLdouble * equation)
{
    return glbinding::Binding::ClipPlane(plane, equation);
}

void glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::Binding::Color3b(red, green, blue);
}

void glColor3bv(const GLbyte * v)
{
    return glbinding::Binding::Color3bv(v);
}

void glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::Binding::Color3d(red, green, blue);
}

void glColor3dv(const GLdouble * v)
{
    return glbinding::Binding::Color3dv(v);
}

void glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::Binding::Color3f(red, green, blue);
}

void glColor3fv(const GLfloat * v)
{
    return glbinding::Binding::Color3fv(v);
}

void glColor3i(GLint red, GLint green, GLint blue)
{
    return glbinding::Binding::Color3i(red, green, blue);
}

void glColor3iv(const GLint * v)
{
    return glbinding::Binding::Color3iv(v);
}

void glColor3s(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::Binding::Color3s(red, green, blue);
}

void glColor3sv(const GLshort * v)
{
    return glbinding::Binding::Color3sv(v);
}

void glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::Binding::Color3ub(red, green, blue);
}

void glColor3ubv(const GLubyte * v)
{
    return glbinding::Binding::Color3ubv(v);
}

void glColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::Binding::Color3ui(red, green, blue);
}

void glColor3uiv(const GLuint * v)
{
    return glbinding::Binding::Color3uiv(v);
}

void glColor3us(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::Binding::Color3us(red, green, blue);
}

void glColor3usv(const GLushort * v)
{
    return glbinding::Binding::Color3usv(v);
}

void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
    return glbinding::Binding::Color4b(red, green, blue, alpha);
}

void glColor4bv(const GLbyte * v)
{
    return glbinding::Binding::Color4bv(v);
}

void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
    return glbinding::Binding::Color4d(red, green, blue, alpha);
}

void glColor4dv(const GLdouble * v)
{
    return glbinding::Binding::Color4dv(v);
}

void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::Binding::Color4f(red, green, blue, alpha);
}

void glColor4fv(const GLfloat * v)
{
    return glbinding::Binding::Color4fv(v);
}

void glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
    return glbinding::Binding::Color4i(red, green, blue, alpha);
}

void glColor4iv(const GLint * v)
{
    return glbinding::Binding::Color4iv(v);
}

void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
    return glbinding::Binding::Color4s(red, green, blue, alpha);
}

void glColor4sv(const GLshort * v)
{
    return glbinding::Binding::Color4sv(v);
}

void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
    return glbinding::Binding::Color4ub(red, green, blue, alpha);
}

void glColor4ubv(const GLubyte * v)
{
    return glbinding::Binding::Color4ubv(v);
}

void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return glbinding::Binding::Color4ui(red, green, blue, alpha);
}

void glColor4uiv(const GLuint * v)
{
    return glbinding::Binding::Color4uiv(v);
}

void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
    return glbinding::Binding::Color4us(red, green, blue, alpha);
}

void glColor4usv(const GLushort * v)
{
    return glbinding::Binding::Color4usv(v);
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glbinding::Binding::ColorMask(red, green, blue, alpha);
}

void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glbinding::Binding::ColorMaski(index, r, g, b, a);
}

void glColorMaterial(GLenum face, GLenum mode)
{
    return glbinding::Binding::ColorMaterial(face, mode);
}

void glColorP3ui(GLenum type, GLuint color)
{
    return glbinding::Binding::ColorP3ui(type, color);
}

void glColorP3uiv(GLenum type, const GLuint * color)
{
    return glbinding::Binding::ColorP3uiv(type, color);
}

void glColorP4ui(GLenum type, GLuint color)
{
    return glbinding::Binding::ColorP4ui(type, color);
}

void glColorP4uiv(GLenum type, const GLuint * color)
{
    return glbinding::Binding::ColorP4uiv(type, color);
}

void glColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::ColorPointer(size, type, stride, pointer);
}

void glCompileShader(GLuint shader)
{
    return glbinding::Binding::CompileShader(shader);
}

void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTextureSubImage1D(texture, level, xoffset, width, format, imageSize, data);
}

void glCompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glbinding::Binding::CompressedTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glbinding::Binding::CopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return glbinding::Binding::CopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glbinding::Binding::CopyNamedBufferSubData(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
    return glbinding::Binding::CopyPixels(x, y, width, height, type);
}

void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return glbinding::Binding::CopyTexImage1D(target, level, internalformat, x, y, width, border);
}

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glbinding::Binding::CopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return glbinding::Binding::CopyTextureSubImage1D(texture, level, xoffset, x, y, width);
}

void glCopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTextureSubImage2D(texture, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::CopyTextureSubImage3D(texture, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCreateBuffers(GLsizei n, GLuint * buffers)
{
    return glbinding::Binding::CreateBuffers(n, buffers);
}

void glCreateFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glbinding::Binding::CreateFramebuffers(n, framebuffers);
}

GLuint glCreateProgram()
{
    return glbinding::Binding::CreateProgram();
}

void glCreateProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return glbinding::Binding::CreateProgramPipelines(n, pipelines);
}

void glCreateQueries(GLenum target, GLsizei n, GLuint * ids)
{
    return glbinding::Binding::CreateQueries(target, n, ids);
}

void glCreateRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::Binding::CreateRenderbuffers(n, renderbuffers);
}

void glCreateSamplers(GLsizei n, GLuint * samplers)
{
    return glbinding::Binding::CreateSamplers(n, samplers);
}

GLuint glCreateShader(GLenum type)
{
    return glbinding::Binding::CreateShader(type);
}

GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings)
{
    return glbinding::Binding::CreateShaderProgramv(type, count, strings);
}

void glCreateTextures(GLenum target, GLsizei n, GLuint * textures)
{
    return glbinding::Binding::CreateTextures(target, n, textures);
}

void glCreateTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::CreateTransformFeedbacks(n, ids);
}

void glCreateVertexArrays(GLsizei n, GLuint * arrays)
{
    return glbinding::Binding::CreateVertexArrays(n, arrays);
}

void glCullFace(GLenum mode)
{
    return glbinding::Binding::CullFace(mode);
}

void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam)
{
    return glbinding::Binding::DebugMessageCallback(callback, userParam);
}

void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glbinding::Binding::DebugMessageControl(source, type, severity, count, ids, enabled);
}

void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return glbinding::Binding::DebugMessageInsert(source, type, id, severity, length, buf);
}

void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return glbinding::Binding::DeleteBuffers(n, buffers);
}

void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return glbinding::Binding::DeleteFramebuffers(n, framebuffers);
}

void glDeleteLists(GLuint list, GLsizei range)
{
    return glbinding::Binding::DeleteLists(list, range);
}

void glDeleteProgram(GLuint program)
{
    return glbinding::Binding::DeleteProgram(program);
}

void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
    return glbinding::Binding::DeleteProgramPipelines(n, pipelines);
}

void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return glbinding::Binding::DeleteQueries(n, ids);
}

void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return glbinding::Binding::DeleteRenderbuffers(n, renderbuffers);
}

void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
    return glbinding::Binding::DeleteSamplers(count, samplers);
}

void glDeleteShader(GLuint shader)
{
    return glbinding::Binding::DeleteShader(shader);
}

void glDeleteSync(GLsync sync)
{
    return glbinding::Binding::DeleteSync(sync);
}

void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return glbinding::Binding::DeleteTextures(n, textures);
}

void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
    return glbinding::Binding::DeleteTransformFeedbacks(n, ids);
}

void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return glbinding::Binding::DeleteVertexArrays(n, arrays);
}

void glDepthFunc(GLenum func)
{
    return glbinding::Binding::DepthFunc(func);
}

void glDepthMask(GLboolean flag)
{
    return glbinding::Binding::DepthMask(flag);
}

void glDepthRange(GLdouble near_, GLdouble far_)
{
    return glbinding::Binding::DepthRange(near_, far_);
}

void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble * v)
{
    return glbinding::Binding::DepthRangeArrayv(first, count, v);
}

void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f)
{
    return glbinding::Binding::DepthRangeIndexed(index, n, f);
}

void glDepthRangef(GLfloat n, GLfloat f)
{
    return glbinding::Binding::DepthRangef(n, f);
}

void glDetachShader(GLuint program, GLuint shader)
{
    return glbinding::Binding::DetachShader(program, shader);
}

void glDisable(GLenum cap)
{
    return glbinding::Binding::Disable(cap);
}

void glDisableClientState(GLenum array)
{
    return glbinding::Binding::DisableClientState(array);
}

void glDisableVertexArrayAttrib(GLuint vaobj, GLuint index)
{
    return glbinding::Binding::DisableVertexArrayAttrib(vaobj, index);
}

void glDisableVertexAttribArray(GLuint index)
{
    return glbinding::Binding::DisableVertexAttribArray(index);
}

void glDisablei(GLenum target, GLuint index)
{
    return glbinding::Binding::Disablei(target, index);
}

void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
    return glbinding::Binding::DispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

void glDispatchComputeIndirect(GLintptr indirect)
{
    return glbinding::Binding::DispatchComputeIndirect(indirect);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return glbinding::Binding::DrawArrays(mode, first, count);
}

void glDrawArraysIndirect(GLenum mode, const void * indirect)
{
    return glbinding::Binding::DrawArraysIndirect(mode, indirect);
}

void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return glbinding::Binding::DrawArraysInstanced(mode, first, count, instancecount);
}

void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
    return glbinding::Binding::DrawArraysInstancedBaseInstance(mode, first, count, instancecount, baseinstance);
}

void glDrawBuffer(GLenum buf)
{
    return glbinding::Binding::DrawBuffer(buf);
}

void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
    return glbinding::Binding::DrawBuffers(n, bufs);
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::Binding::DrawElements(mode, count, type, indices);
}

void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glbinding::Binding::DrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
    return glbinding::Binding::DrawElementsIndirect(mode, type, indirect);
}

void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return glbinding::Binding::DrawElementsInstanced(mode, count, type, indices, instancecount);
}

void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
    return glbinding::Binding::DrawElementsInstancedBaseInstance(mode, count, type, indices, instancecount, baseinstance);
}

void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return glbinding::Binding::DrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
    return glbinding::Binding::DrawElementsInstancedBaseVertexBaseInstance(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::DrawPixels(width, height, format, type, pixels);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glbinding::Binding::DrawRangeElements(mode, start, end, count, type, indices);
}

void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glbinding::Binding::DrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

void glDrawTransformFeedback(GLenum mode, GLuint id)
{
    return glbinding::Binding::DrawTransformFeedback(mode, id);
}

void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount)
{
    return glbinding::Binding::DrawTransformFeedbackInstanced(mode, id, instancecount);
}

void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream)
{
    return glbinding::Binding::DrawTransformFeedbackStream(mode, id, stream);
}

void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount)
{
    return glbinding::Binding::DrawTransformFeedbackStreamInstanced(mode, id, stream, instancecount);
}

void glEdgeFlag(GLboolean flag)
{
    return glbinding::Binding::EdgeFlag(flag);
}

void glEdgeFlagPointer(GLsizei stride, const void * pointer)
{
    return glbinding::Binding::EdgeFlagPointer(stride, pointer);
}

void glEdgeFlagv(const GLboolean * flag)
{
    return glbinding::Binding::EdgeFlagv(flag);
}

void glEnable(GLenum cap)
{
    return glbinding::Binding::Enable(cap);
}

void glEnableClientState(GLenum array)
{
    return glbinding::Binding::EnableClientState(array);
}

void glEnableVertexArrayAttrib(GLuint vaobj, GLuint index)
{
    return glbinding::Binding::EnableVertexArrayAttrib(vaobj, index);
}

void glEnableVertexAttribArray(GLuint index)
{
    return glbinding::Binding::EnableVertexAttribArray(index);
}

void glEnablei(GLenum target, GLuint index)
{
    return glbinding::Binding::Enablei(target, index);
}

void glEnd()
{
    return glbinding::Binding::End();
}

void glEndConditionalRender()
{
    return glbinding::Binding::EndConditionalRender();
}

void glEndList()
{
    return glbinding::Binding::EndList();
}

void glEndQuery(GLenum target)
{
    return glbinding::Binding::EndQuery(target);
}

void glEndQueryIndexed(GLenum target, GLuint index)
{
    return glbinding::Binding::EndQueryIndexed(target, index);
}

void glEndTransformFeedback()
{
    return glbinding::Binding::EndTransformFeedback();
}

void glEvalCoord1d(GLdouble u)
{
    return glbinding::Binding::EvalCoord1d(u);
}

void glEvalCoord1dv(const GLdouble * u)
{
    return glbinding::Binding::EvalCoord1dv(u);
}

void glEvalCoord1f(GLfloat u)
{
    return glbinding::Binding::EvalCoord1f(u);
}

void glEvalCoord1fv(const GLfloat * u)
{
    return glbinding::Binding::EvalCoord1fv(u);
}

void glEvalCoord2d(GLdouble u, GLdouble v)
{
    return glbinding::Binding::EvalCoord2d(u, v);
}

void glEvalCoord2dv(const GLdouble * u)
{
    return glbinding::Binding::EvalCoord2dv(u);
}

void glEvalCoord2f(GLfloat u, GLfloat v)
{
    return glbinding::Binding::EvalCoord2f(u, v);
}

void glEvalCoord2fv(const GLfloat * u)
{
    return glbinding::Binding::EvalCoord2fv(u);
}

void glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
    return glbinding::Binding::EvalMesh1(mode, i1, i2);
}

void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
    return glbinding::Binding::EvalMesh2(mode, i1, i2, j1, j2);
}

void glEvalPoint1(GLint i)
{
    return glbinding::Binding::EvalPoint1(i);
}

void glEvalPoint2(GLint i, GLint j)
{
    return glbinding::Binding::EvalPoint2(i, j);
}

void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer)
{
    return glbinding::Binding::FeedbackBuffer(size, type, buffer);
}

GLsync glFenceSync(GLenum condition, UnusedMask flags)
{
    return glbinding::Binding::FenceSync(condition, flags);
}

void glFinish()
{
    return glbinding::Binding::Finish();
}

void glFlush()
{
    return glbinding::Binding::Flush();
}

void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return glbinding::Binding::FlushMappedBufferRange(target, offset, length);
}

void glFlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return glbinding::Binding::FlushMappedNamedBufferRange(buffer, offset, length);
}

void glFogCoordPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::FogCoordPointer(type, stride, pointer);
}

void glFogCoordd(GLdouble coord)
{
    return glbinding::Binding::FogCoordd(coord);
}

void glFogCoorddv(const GLdouble * coord)
{
    return glbinding::Binding::FogCoorddv(coord);
}

void glFogCoordf(GLfloat coord)
{
    return glbinding::Binding::FogCoordf(coord);
}

void glFogCoordfv(const GLfloat * coord)
{
    return glbinding::Binding::FogCoordfv(coord);
}

void glFogf(GLenum pname, GLfloat param)
{
    return glbinding::Binding::Fogf(pname, param);
}

void glFogfv(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::Fogfv(pname, params);
}

void glFogi(GLenum pname, GLint param)
{
    return glbinding::Binding::Fogi(pname, param);
}

void glFogiv(GLenum pname, const GLint * params)
{
    return glbinding::Binding::Fogiv(pname, params);
}

void glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::FramebufferParameteri(target, pname, param);
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::Binding::FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::Binding::FramebufferTexture(target, attachment, texture, level);
}

void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::Binding::FramebufferTexture1D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glbinding::Binding::FramebufferTexture2D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glbinding::Binding::FramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::Binding::FramebufferTextureLayer(target, attachment, texture, level, layer);
}

void glFrontFace(GLenum mode)
{
    return glbinding::Binding::FrontFace(mode);
}

void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::Binding::Frustum(left, right, bottom, top, zNear, zFar);
}

void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return glbinding::Binding::GenBuffers(n, buffers);
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glbinding::Binding::GenFramebuffers(n, framebuffers);
}

GLuint glGenLists(GLsizei range)
{
    return glbinding::Binding::GenLists(range);
}

void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return glbinding::Binding::GenProgramPipelines(n, pipelines);
}

void glGenQueries(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::GenQueries(n, ids);
}

void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glbinding::Binding::GenRenderbuffers(n, renderbuffers);
}

void glGenSamplers(GLsizei count, GLuint * samplers)
{
    return glbinding::Binding::GenSamplers(count, samplers);
}

void glGenTextures(GLsizei n, GLuint * textures)
{
    return glbinding::Binding::GenTextures(n, textures);
}

void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return glbinding::Binding::GenTransformFeedbacks(n, ids);
}

void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return glbinding::Binding::GenVertexArrays(n, arrays);
}

void glGenerateMipmap(GLenum target)
{
    return glbinding::Binding::GenerateMipmap(target);
}

void glGenerateTextureMipmap(GLuint texture)
{
    return glbinding::Binding::GenerateTextureMipmap(texture);
}

void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetActiveAtomicCounterBufferiv(program, bufferIndex, pname, params);
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::Binding::GetActiveAttrib(program, index, bufSize, length, size, type, name);
}

void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return glbinding::Binding::GetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
}

void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
    return glbinding::Binding::GetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
}

void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values)
{
    return glbinding::Binding::GetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glbinding::Binding::GetActiveUniform(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return glbinding::Binding::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
    return glbinding::Binding::GetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
}

void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return glbinding::Binding::GetAttachedShaders(program, maxCount, count, shaders);
}

GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetAttribLocation(program, name);
}

void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return glbinding::Binding::GetBooleani_v(target, index, data);
}

void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return glbinding::Binding::GetBooleanv(pname, data);
}

void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
    return glbinding::Binding::GetBufferParameteri64v(target, pname, params);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetBufferParameteriv(target, pname, params);
}

void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return glbinding::Binding::GetBufferPointerv(target, pname, params);
}

void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data)
{
    return glbinding::Binding::GetBufferSubData(target, offset, size, data);
}

void glGetClipPlane(GLenum plane, GLdouble * equation)
{
    return glbinding::Binding::GetClipPlane(plane, equation);
}

void glGetCompressedTexImage(GLenum target, GLint level, void * img)
{
    return glbinding::Binding::GetCompressedTexImage(target, level, img);
}

void glGetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetCompressedTextureImage(texture, level, bufSize, pixels);
}

void glGetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetCompressedTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
}

GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glbinding::Binding::GetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void glGetDoublei_v(GLenum target, GLuint index, GLdouble * data)
{
    return glbinding::Binding::GetDoublei_v(target, index, data);
}

void glGetDoublev(GLenum pname, GLdouble * data)
{
    return glbinding::Binding::GetDoublev(pname, data);
}

GLenum glGetError()
{
    return static_cast<gl45::GLenum>(glbinding::Binding::GetError());
}

void glGetFloati_v(GLenum target, GLuint index, GLfloat * data)
{
    return glbinding::Binding::GetFloati_v(target, index, data);
}

void glGetFloatv(GLenum pname, GLfloat * data)
{
    return glbinding::Binding::GetFloatv(pname, data);
}

GLint glGetFragDataIndex(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetFragDataIndex(program, name);
}

GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetFragDataLocation(program, name);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetFramebufferParameteriv(target, pname, params);
}

GLenum glGetGraphicsResetStatus()
{
    return static_cast<gl45::GLenum>(glbinding::Binding::GetGraphicsResetStatus());
}

void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
    return glbinding::Binding::GetInteger64i_v(target, index, data);
}

void glGetInteger64v(GLenum pname, GLint64 * data)
{
    return glbinding::Binding::GetInteger64v(pname, data);
}

void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return glbinding::Binding::GetIntegeri_v(target, index, data);
}

void glGetIntegerv(GLenum pname, GLint * data)
{
    return glbinding::Binding::GetIntegerv(pname, data);
}

void glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params)
{
    return glbinding::Binding::GetInternalformati64v(target, internalformat, pname, bufSize, params);
}

void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
    return glbinding::Binding::GetInternalformativ(target, internalformat, pname, bufSize, params);
}

void glGetLightfv(GLenum light, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetLightfv(light, pname, params);
}

void glGetLightiv(GLenum light, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetLightiv(light, pname, params);
}

void glGetMapdv(GLenum target, GLenum query, GLdouble * v)
{
    return glbinding::Binding::GetMapdv(target, query, v);
}

void glGetMapfv(GLenum target, GLenum query, GLfloat * v)
{
    return glbinding::Binding::GetMapfv(target, query, v);
}

void glGetMapiv(GLenum target, GLenum query, GLint * v)
{
    return glbinding::Binding::GetMapiv(target, query, v);
}

void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetMaterialfv(face, pname, params);
}

void glGetMaterialiv(GLenum face, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetMaterialiv(face, pname, params);
}

void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return glbinding::Binding::GetMultisamplefv(pname, index, val);
}

void glGetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 * params)
{
    return glbinding::Binding::GetNamedBufferParameteri64v(buffer, pname, params);
}

void glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedBufferParameteriv(buffer, pname, params);
}

void glGetNamedBufferPointerv(GLuint buffer, GLenum pname, void ** params)
{
    return glbinding::Binding::GetNamedBufferPointerv(buffer, pname, params);
}

void glGetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
    return glbinding::Binding::GetNamedBufferSubData(buffer, offset, size, data);
}

void glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedFramebufferAttachmentParameteriv(framebuffer, attachment, pname, params);
}

void glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetNamedFramebufferParameteriv(framebuffer, pname, param);
}

void glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetNamedRenderbufferParameteriv(renderbuffer, pname, params);
}

void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::Binding::GetObjectLabel(identifier, name, bufSize, length, label);
}

void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glbinding::Binding::GetObjectPtrLabel(ptr, bufSize, length, label);
}

void glGetPixelMapfv(GLenum map, GLfloat * values)
{
    return glbinding::Binding::GetPixelMapfv(map, values);
}

void glGetPixelMapuiv(GLenum map, GLuint * values)
{
    return glbinding::Binding::GetPixelMapuiv(map, values);
}

void glGetPixelMapusv(GLenum map, GLushort * values)
{
    return glbinding::Binding::GetPixelMapusv(map, values);
}

void glGetPointerv(GLenum pname, void ** params)
{
    return glbinding::Binding::GetPointerv(pname, params);
}

void glGetPolygonStipple(GLubyte * mask)
{
    return glbinding::Binding::GetPolygonStipple(mask);
}

void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return glbinding::Binding::GetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::Binding::GetProgramInfoLog(program, bufSize, length, infoLog);
}

void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetProgramInterfaceiv(program, programInterface, pname, params);
}

void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::Binding::GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetProgramPipelineiv(pipeline, pname, params);
}

GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::Binding::GetProgramResourceIndex(program, programInterface, name);
}

GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::Binding::GetProgramResourceLocation(program, programInterface, name);
}

GLint glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glbinding::Binding::GetProgramResourceLocationIndex(program, programInterface, name);
}

void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return glbinding::Binding::GetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
    return glbinding::Binding::GetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values)
{
    return glbinding::Binding::GetProgramStageiv(program, shadertype, pname, values);
}

void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetProgramiv(program, pname, params);
}

void glGetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return glbinding::Binding::GetQueryBufferObjecti64v(id, buffer, pname, offset);
}

void glGetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return glbinding::Binding::GetQueryBufferObjectiv(id, buffer, pname, offset);
}

void glGetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return glbinding::Binding::GetQueryBufferObjectui64v(id, buffer, pname, offset);
}

void glGetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
    return glbinding::Binding::GetQueryBufferObjectuiv(id, buffer, pname, offset);
}

void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetQueryIndexediv(target, index, pname, params);
}

void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params)
{
    return glbinding::Binding::GetQueryObjecti64v(id, pname, params);
}

void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetQueryObjectiv(id, pname, params);
}

void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params)
{
    return glbinding::Binding::GetQueryObjectui64v(id, pname, params);
}

void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetQueryObjectuiv(id, pname, params);
}

void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetQueryiv(target, pname, params);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetRenderbufferParameteriv(target, pname, params);
}

void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetSamplerParameterIiv(sampler, pname, params);
}

void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetSamplerParameterIuiv(sampler, pname, params);
}

void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetSamplerParameterfv(sampler, pname, params);
}

void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetSamplerParameteriv(sampler, pname, params);
}

void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::Binding::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
    return glbinding::Binding::GetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return glbinding::Binding::GetShaderSource(shader, bufSize, length, source);
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetShaderiv(shader, pname, params);
}

const GLubyte * glGetString(GLenum name)
{
    return glbinding::Binding::GetString(name);
}

const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return glbinding::Binding::GetStringi(name, index);
}

GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar * name)
{
    return glbinding::Binding::GetSubroutineIndex(program, shadertype, name);
}

GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar * name)
{
    return glbinding::Binding::GetSubroutineUniformLocation(program, shadertype, name);
}

void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
    return glbinding::Binding::GetSynciv(sync, pname, bufSize, length, values);
}

void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTexEnvfv(target, pname, params);
}

void glGetTexEnviv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexEnviv(target, pname, params);
}

void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetTexGendv(coord, pname, params);
}

void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTexGenfv(coord, pname, params);
}

void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexGeniv(coord, pname, params);
}

void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return glbinding::Binding::GetTexImage(target, level, format, type, pixels);
}

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTexLevelParameterfv(target, level, pname, params);
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexLevelParameteriv(target, level, pname, params);
}

void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexParameterIiv(target, pname, params);
}

void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetTexParameterIuiv(target, pname, params);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTexParameterfv(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTexParameteriv(target, pname, params);
}

void glGetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetTextureImage(texture, level, format, type, bufSize, pixels);
}

void glGetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTextureLevelParameterfv(texture, level, pname, params);
}

void glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureLevelParameteriv(texture, level, pname, params);
}

void glGetTextureParameterIiv(GLuint texture, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureParameterIiv(texture, pname, params);
}

void glGetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetTextureParameterIuiv(texture, pname, params);
}

void glGetTextureParameterfv(GLuint texture, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetTextureParameterfv(texture, pname, params);
}

void glGetTextureParameteriv(GLuint texture, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetTextureParameteriv(texture, pname, params);
}

void glGetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetTextureSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
}

void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glbinding::Binding::GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

void glGetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 * param)
{
    return glbinding::Binding::GetTransformFeedbacki64_v(xfb, pname, index, param);
}

void glGetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint * param)
{
    return glbinding::Binding::GetTransformFeedbacki_v(xfb, pname, index, param);
}

void glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetTransformFeedbackiv(xfb, pname, param);
}

GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return glbinding::Binding::GetUniformBlockIndex(program, uniformBlockName);
}

void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return glbinding::Binding::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return glbinding::Binding::GetUniformLocation(program, name);
}

void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params)
{
    return glbinding::Binding::GetUniformSubroutineuiv(shadertype, location, params);
}

void glGetUniformdv(GLuint program, GLint location, GLdouble * params)
{
    return glbinding::Binding::GetUniformdv(program, location, params);
}

void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return glbinding::Binding::GetUniformfv(program, location, params);
}

void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return glbinding::Binding::GetUniformiv(program, location, params);
}

void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return glbinding::Binding::GetUniformuiv(program, location, params);
}

void glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 * param)
{
    return glbinding::Binding::GetVertexArrayIndexed64iv(vaobj, index, pname, param);
}

void glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetVertexArrayIndexediv(vaobj, index, pname, param);
}

void glGetVertexArrayiv(GLuint vaobj, GLenum pname, GLint * param)
{
    return glbinding::Binding::GetVertexArrayiv(vaobj, pname, param);
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVertexAttribIiv(index, pname, params);
}

void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return glbinding::Binding::GetVertexAttribIuiv(index, pname, params);
}

void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetVertexAttribLdv(index, pname, params);
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return glbinding::Binding::GetVertexAttribPointerv(index, pname, pointer);
}

void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params)
{
    return glbinding::Binding::GetVertexAttribdv(index, pname, params);
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return glbinding::Binding::GetVertexAttribfv(index, pname, params);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return glbinding::Binding::GetVertexAttribiv(index, pname, params);
}

void glGetnColorTable(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table)
{
    return glbinding::Binding::GetnColorTable(target, format, type, bufSize, table);
}

void glGetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetnCompressedTexImage(target, lod, bufSize, pixels);
}

void glGetnConvolutionFilter(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image)
{
    return glbinding::Binding::GetnConvolutionFilter(target, format, type, bufSize, image);
}

void glGetnHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::Binding::GetnHistogram(target, reset, format, type, bufSize, values);
}

void glGetnMapdv(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v)
{
    return glbinding::Binding::GetnMapdv(target, query, bufSize, v);
}

void glGetnMapfv(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v)
{
    return glbinding::Binding::GetnMapfv(target, query, bufSize, v);
}

void glGetnMapiv(GLenum target, GLenum query, GLsizei bufSize, GLint * v)
{
    return glbinding::Binding::GetnMapiv(target, query, bufSize, v);
}

void glGetnMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values)
{
    return glbinding::Binding::GetnMinmax(target, reset, format, type, bufSize, values);
}

void glGetnPixelMapfv(GLenum map, GLsizei bufSize, GLfloat * values)
{
    return glbinding::Binding::GetnPixelMapfv(map, bufSize, values);
}

void glGetnPixelMapuiv(GLenum map, GLsizei bufSize, GLuint * values)
{
    return glbinding::Binding::GetnPixelMapuiv(map, bufSize, values);
}

void glGetnPixelMapusv(GLenum map, GLsizei bufSize, GLushort * values)
{
    return glbinding::Binding::GetnPixelMapusv(map, bufSize, values);
}

void glGetnPolygonStipple(GLsizei bufSize, GLubyte * pattern)
{
    return glbinding::Binding::GetnPolygonStipple(bufSize, pattern);
}

void glGetnSeparableFilter(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span)
{
    return glbinding::Binding::GetnSeparableFilter(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

void glGetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
    return glbinding::Binding::GetnTexImage(target, level, format, type, bufSize, pixels);
}

void glGetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
    return glbinding::Binding::GetnUniformdv(program, location, bufSize, params);
}

void glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glbinding::Binding::GetnUniformfv(program, location, bufSize, params);
}

void glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glbinding::Binding::GetnUniformiv(program, location, bufSize, params);
}

void glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return glbinding::Binding::GetnUniformuiv(program, location, bufSize, params);
}

void glHint(GLenum target, GLenum mode)
{
    return glbinding::Binding::Hint(target, mode);
}

void glIndexMask(GLuint mask)
{
    return glbinding::Binding::IndexMask(mask);
}

void glIndexPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::IndexPointer(type, stride, pointer);
}

void glIndexd(GLdouble c)
{
    return glbinding::Binding::Indexd(c);
}

void glIndexdv(const GLdouble * c)
{
    return glbinding::Binding::Indexdv(c);
}

void glIndexf(GLfloat c)
{
    return glbinding::Binding::Indexf(c);
}

void glIndexfv(const GLfloat * c)
{
    return glbinding::Binding::Indexfv(c);
}

void glIndexi(GLint c)
{
    return glbinding::Binding::Indexi(c);
}

void glIndexiv(const GLint * c)
{
    return glbinding::Binding::Indexiv(c);
}

void glIndexs(GLshort c)
{
    return glbinding::Binding::Indexs(c);
}

void glIndexsv(const GLshort * c)
{
    return glbinding::Binding::Indexsv(c);
}

void glIndexub(GLubyte c)
{
    return glbinding::Binding::Indexub(c);
}

void glIndexubv(const GLubyte * c)
{
    return glbinding::Binding::Indexubv(c);
}

void glInitNames()
{
    return glbinding::Binding::InitNames();
}

void glInterleavedArrays(GLenum format, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::InterleavedArrays(format, stride, pointer);
}

void glInvalidateBufferData(GLuint buffer)
{
    return glbinding::Binding::InvalidateBufferData(buffer);
}

void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
    return glbinding::Binding::InvalidateBufferSubData(buffer, offset, length);
}

void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return glbinding::Binding::InvalidateFramebuffer(target, numAttachments, attachments);
}

void glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments)
{
    return glbinding::Binding::InvalidateNamedFramebufferData(framebuffer, numAttachments, attachments);
}

void glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::InvalidateNamedFramebufferSubData(framebuffer, numAttachments, attachments, x, y, width, height);
}

void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::InvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

void glInvalidateTexImage(GLuint texture, GLint level)
{
    return glbinding::Binding::InvalidateTexImage(texture, level);
}

void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::Binding::InvalidateTexSubImage(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

GLboolean glIsBuffer(GLuint buffer)
{
    return glbinding::Binding::IsBuffer(buffer);
}

GLboolean glIsEnabled(GLenum cap)
{
    return glbinding::Binding::IsEnabled(cap);
}

GLboolean glIsEnabledi(GLenum target, GLuint index)
{
    return glbinding::Binding::IsEnabledi(target, index);
}

GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return glbinding::Binding::IsFramebuffer(framebuffer);
}

GLboolean glIsList(GLuint list)
{
    return glbinding::Binding::IsList(list);
}

GLboolean glIsProgram(GLuint program)
{
    return glbinding::Binding::IsProgram(program);
}

GLboolean glIsProgramPipeline(GLuint pipeline)
{
    return glbinding::Binding::IsProgramPipeline(pipeline);
}

GLboolean glIsQuery(GLuint id)
{
    return glbinding::Binding::IsQuery(id);
}

GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return glbinding::Binding::IsRenderbuffer(renderbuffer);
}

GLboolean glIsSampler(GLuint sampler)
{
    return glbinding::Binding::IsSampler(sampler);
}

GLboolean glIsShader(GLuint shader)
{
    return glbinding::Binding::IsShader(shader);
}

GLboolean glIsSync(GLsync sync)
{
    return glbinding::Binding::IsSync(sync);
}

GLboolean glIsTexture(GLuint texture)
{
    return glbinding::Binding::IsTexture(texture);
}

GLboolean glIsTransformFeedback(GLuint id)
{
    return glbinding::Binding::IsTransformFeedback(id);
}

GLboolean glIsVertexArray(GLuint array)
{
    return glbinding::Binding::IsVertexArray(array);
}

void glLightModelf(GLenum pname, GLfloat param)
{
    return glbinding::Binding::LightModelf(pname, param);
}

void glLightModelfv(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::LightModelfv(pname, params);
}

void glLightModeli(GLenum pname, GLint param)
{
    return glbinding::Binding::LightModeli(pname, param);
}

void glLightModeliv(GLenum pname, const GLint * params)
{
    return glbinding::Binding::LightModeliv(pname, params);
}

void glLightf(GLenum light, GLenum pname, GLfloat param)
{
    return glbinding::Binding::Lightf(light, pname, param);
}

void glLightfv(GLenum light, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::Lightfv(light, pname, params);
}

void glLighti(GLenum light, GLenum pname, GLint param)
{
    return glbinding::Binding::Lighti(light, pname, param);
}

void glLightiv(GLenum light, GLenum pname, const GLint * params)
{
    return glbinding::Binding::Lightiv(light, pname, params);
}

void glLineStipple(GLint factor, GLushort pattern)
{
    return glbinding::Binding::LineStipple(factor, pattern);
}

void glLineWidth(GLfloat width)
{
    return glbinding::Binding::LineWidth(width);
}

void glLinkProgram(GLuint program)
{
    return glbinding::Binding::LinkProgram(program);
}

void glListBase(GLuint base)
{
    return glbinding::Binding::ListBase(base);
}

void glLoadIdentity()
{
    return glbinding::Binding::LoadIdentity();
}

void glLoadMatrixd(const GLdouble * m)
{
    return glbinding::Binding::LoadMatrixd(m);
}

void glLoadMatrixf(const GLfloat * m)
{
    return glbinding::Binding::LoadMatrixf(m);
}

void glLoadName(GLuint name)
{
    return glbinding::Binding::LoadName(name);
}

void glLoadTransposeMatrixd(const GLdouble * m)
{
    return glbinding::Binding::LoadTransposeMatrixd(m);
}

void glLoadTransposeMatrixf(const GLfloat * m)
{
    return glbinding::Binding::LoadTransposeMatrixf(m);
}

void glLogicOp(GLenum opcode)
{
    return glbinding::Binding::LogicOp(opcode);
}

void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return glbinding::Binding::Map1d(target, u1, u2, stride, order, points);
}

void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return glbinding::Binding::Map1f(target, u1, u2, stride, order, points);
}

void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return glbinding::Binding::Map2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return glbinding::Binding::Map2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void * glMapBuffer(GLenum target, GLenum access)
{
    return glbinding::Binding::MapBuffer(target, access);
}

void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return glbinding::Binding::MapBufferRange(target, offset, length, access);
}

void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
    return glbinding::Binding::MapGrid1d(un, u1, u2);
}

void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
    return glbinding::Binding::MapGrid1f(un, u1, u2);
}

void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
    return glbinding::Binding::MapGrid2d(un, u1, u2, vn, v1, v2);
}

void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
    return glbinding::Binding::MapGrid2f(un, u1, u2, vn, v1, v2);
}

void * glMapNamedBuffer(GLuint buffer, GLenum access)
{
    return glbinding::Binding::MapNamedBuffer(buffer, access);
}

void * glMapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length, BufferAccessMask access)
{
    return glbinding::Binding::MapNamedBufferRange(buffer, offset, length, access);
}

void glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
    return glbinding::Binding::Materialf(face, pname, param);
}

void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::Materialfv(face, pname, params);
}

void glMateriali(GLenum face, GLenum pname, GLint param)
{
    return glbinding::Binding::Materiali(face, pname, param);
}

void glMaterialiv(GLenum face, GLenum pname, const GLint * params)
{
    return glbinding::Binding::Materialiv(face, pname, params);
}

void glMatrixMode(GLenum mode)
{
    return glbinding::Binding::MatrixMode(mode);
}

void glMemoryBarrier(MemoryBarrierMask barriers)
{
    return glbinding::Binding::MemoryBarrier(barriers);
}

void glMemoryBarrierByRegion(MemoryBarrierMask barriers)
{
    return glbinding::Binding::MemoryBarrierByRegion(barriers);
}

void glMinSampleShading(GLfloat value)
{
    return glbinding::Binding::MinSampleShading(value);
}

void glMultMatrixd(const GLdouble * m)
{
    return glbinding::Binding::MultMatrixd(m);
}

void glMultMatrixf(const GLfloat * m)
{
    return glbinding::Binding::MultMatrixf(m);
}

void glMultTransposeMatrixd(const GLdouble * m)
{
    return glbinding::Binding::MultTransposeMatrixd(m);
}

void glMultTransposeMatrixf(const GLfloat * m)
{
    return glbinding::Binding::MultTransposeMatrixf(m);
}

void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
    return glbinding::Binding::MultiDrawArrays(mode, first, count, drawcount);
}

void glMultiDrawArraysIndirect(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawArraysIndirect(mode, indirect, drawcount, stride);
}

void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
    return glbinding::Binding::MultiDrawElements(mode, count, type, indices, drawcount);
}

void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
    return glbinding::Binding::MultiDrawElementsBaseVertex(mode, count, type, indices, drawcount, basevertex);
}

void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glbinding::Binding::MultiDrawElementsIndirect(mode, type, indirect, drawcount, stride);
}

void glMultiTexCoord1d(GLenum target, GLdouble s)
{
    return glbinding::Binding::MultiTexCoord1d(target, s);
}

void glMultiTexCoord1dv(GLenum target, const GLdouble * v)
{
    return glbinding::Binding::MultiTexCoord1dv(target, v);
}

void glMultiTexCoord1f(GLenum target, GLfloat s)
{
    return glbinding::Binding::MultiTexCoord1f(target, s);
}

void glMultiTexCoord1fv(GLenum target, const GLfloat * v)
{
    return glbinding::Binding::MultiTexCoord1fv(target, v);
}

void glMultiTexCoord1i(GLenum target, GLint s)
{
    return glbinding::Binding::MultiTexCoord1i(target, s);
}

void glMultiTexCoord1iv(GLenum target, const GLint * v)
{
    return glbinding::Binding::MultiTexCoord1iv(target, v);
}

void glMultiTexCoord1s(GLenum target, GLshort s)
{
    return glbinding::Binding::MultiTexCoord1s(target, s);
}

void glMultiTexCoord1sv(GLenum target, const GLshort * v)
{
    return glbinding::Binding::MultiTexCoord1sv(target, v);
}

void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
    return glbinding::Binding::MultiTexCoord2d(target, s, t);
}

void glMultiTexCoord2dv(GLenum target, const GLdouble * v)
{
    return glbinding::Binding::MultiTexCoord2dv(target, v);
}

void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
    return glbinding::Binding::MultiTexCoord2f(target, s, t);
}

void glMultiTexCoord2fv(GLenum target, const GLfloat * v)
{
    return glbinding::Binding::MultiTexCoord2fv(target, v);
}

void glMultiTexCoord2i(GLenum target, GLint s, GLint t)
{
    return glbinding::Binding::MultiTexCoord2i(target, s, t);
}

void glMultiTexCoord2iv(GLenum target, const GLint * v)
{
    return glbinding::Binding::MultiTexCoord2iv(target, v);
}

void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
    return glbinding::Binding::MultiTexCoord2s(target, s, t);
}

void glMultiTexCoord2sv(GLenum target, const GLshort * v)
{
    return glbinding::Binding::MultiTexCoord2sv(target, v);
}

void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::Binding::MultiTexCoord3d(target, s, t, r);
}

void glMultiTexCoord3dv(GLenum target, const GLdouble * v)
{
    return glbinding::Binding::MultiTexCoord3dv(target, v);
}

void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::Binding::MultiTexCoord3f(target, s, t, r);
}

void glMultiTexCoord3fv(GLenum target, const GLfloat * v)
{
    return glbinding::Binding::MultiTexCoord3fv(target, v);
}

void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
    return glbinding::Binding::MultiTexCoord3i(target, s, t, r);
}

void glMultiTexCoord3iv(GLenum target, const GLint * v)
{
    return glbinding::Binding::MultiTexCoord3iv(target, v);
}

void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return glbinding::Binding::MultiTexCoord3s(target, s, t, r);
}

void glMultiTexCoord3sv(GLenum target, const GLshort * v)
{
    return glbinding::Binding::MultiTexCoord3sv(target, v);
}

void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::Binding::MultiTexCoord4d(target, s, t, r, q);
}

void glMultiTexCoord4dv(GLenum target, const GLdouble * v)
{
    return glbinding::Binding::MultiTexCoord4dv(target, v);
}

void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::Binding::MultiTexCoord4f(target, s, t, r, q);
}

void glMultiTexCoord4fv(GLenum target, const GLfloat * v)
{
    return glbinding::Binding::MultiTexCoord4fv(target, v);
}

void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::Binding::MultiTexCoord4i(target, s, t, r, q);
}

void glMultiTexCoord4iv(GLenum target, const GLint * v)
{
    return glbinding::Binding::MultiTexCoord4iv(target, v);
}

void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::Binding::MultiTexCoord4s(target, s, t, r, q);
}

void glMultiTexCoord4sv(GLenum target, const GLshort * v)
{
    return glbinding::Binding::MultiTexCoord4sv(target, v);
}

void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::Binding::MultiTexCoordP1ui(texture, type, coords);
}

void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::Binding::MultiTexCoordP1uiv(texture, type, coords);
}

void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::Binding::MultiTexCoordP2ui(texture, type, coords);
}

void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::Binding::MultiTexCoordP2uiv(texture, type, coords);
}

void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::Binding::MultiTexCoordP3ui(texture, type, coords);
}

void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::Binding::MultiTexCoordP3uiv(texture, type, coords);
}

void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords)
{
    return glbinding::Binding::MultiTexCoordP4ui(texture, type, coords);
}

void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint * coords)
{
    return glbinding::Binding::MultiTexCoordP4uiv(texture, type, coords);
}

void glNamedBufferData(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage)
{
    return glbinding::Binding::NamedBufferData(buffer, size, data, usage);
}

void glNamedBufferStorage(GLuint buffer, GLsizeiptr size, const void * data, BufferStorageMask flags)
{
    return glbinding::Binding::NamedBufferStorage(buffer, size, data, flags);
}

void glNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glbinding::Binding::NamedBufferSubData(buffer, offset, size, data);
}

void glNamedFramebufferDrawBuffer(GLuint framebuffer, GLenum buf)
{
    return glbinding::Binding::NamedFramebufferDrawBuffer(framebuffer, buf);
}

void glNamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, const GLenum * bufs)
{
    return glbinding::Binding::NamedFramebufferDrawBuffers(framebuffer, n, bufs);
}

void glNamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param)
{
    return glbinding::Binding::NamedFramebufferParameteri(framebuffer, pname, param);
}

void glNamedFramebufferReadBuffer(GLuint framebuffer, GLenum src)
{
    return glbinding::Binding::NamedFramebufferReadBuffer(framebuffer, src);
}

void glNamedFramebufferRenderbuffer(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glbinding::Binding::NamedFramebufferRenderbuffer(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

void glNamedFramebufferTexture(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
    return glbinding::Binding::NamedFramebufferTexture(framebuffer, attachment, texture, level);
}

void glNamedFramebufferTextureLayer(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glbinding::Binding::NamedFramebufferTextureLayer(framebuffer, attachment, texture, level, layer);
}

void glNamedRenderbufferStorage(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::NamedRenderbufferStorage(renderbuffer, internalformat, width, height);
}

void glNamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::NamedRenderbufferStorageMultisample(renderbuffer, samples, internalformat, width, height);
}

void glNewList(GLuint list, GLenum mode)
{
    return glbinding::Binding::NewList(list, mode);
}

void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
    return glbinding::Binding::Normal3b(nx, ny, nz);
}

void glNormal3bv(const GLbyte * v)
{
    return glbinding::Binding::Normal3bv(v);
}

void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
    return glbinding::Binding::Normal3d(nx, ny, nz);
}

void glNormal3dv(const GLdouble * v)
{
    return glbinding::Binding::Normal3dv(v);
}

void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
    return glbinding::Binding::Normal3f(nx, ny, nz);
}

void glNormal3fv(const GLfloat * v)
{
    return glbinding::Binding::Normal3fv(v);
}

void glNormal3i(GLint nx, GLint ny, GLint nz)
{
    return glbinding::Binding::Normal3i(nx, ny, nz);
}

void glNormal3iv(const GLint * v)
{
    return glbinding::Binding::Normal3iv(v);
}

void glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
    return glbinding::Binding::Normal3s(nx, ny, nz);
}

void glNormal3sv(const GLshort * v)
{
    return glbinding::Binding::Normal3sv(v);
}

void glNormalP3ui(GLenum type, GLuint coords)
{
    return glbinding::Binding::NormalP3ui(type, coords);
}

void glNormalP3uiv(GLenum type, const GLuint * coords)
{
    return glbinding::Binding::NormalP3uiv(type, coords);
}

void glNormalPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::NormalPointer(type, stride, pointer);
}

void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
    return glbinding::Binding::ObjectLabel(identifier, name, length, label);
}

void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label)
{
    return glbinding::Binding::ObjectPtrLabel(ptr, length, label);
}

void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glbinding::Binding::Ortho(left, right, bottom, top, zNear, zFar);
}

void glPassThrough(GLfloat token)
{
    return glbinding::Binding::PassThrough(token);
}

void glPatchParameterfv(GLenum pname, const GLfloat * values)
{
    return glbinding::Binding::PatchParameterfv(pname, values);
}

void glPatchParameteri(GLenum pname, GLint value)
{
    return glbinding::Binding::PatchParameteri(pname, value);
}

void glPauseTransformFeedback()
{
    return glbinding::Binding::PauseTransformFeedback();
}

void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values)
{
    return glbinding::Binding::PixelMapfv(map, mapsize, values);
}

void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values)
{
    return glbinding::Binding::PixelMapuiv(map, mapsize, values);
}

void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values)
{
    return glbinding::Binding::PixelMapusv(map, mapsize, values);
}

void glPixelStoref(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PixelStoref(pname, param);
}

void glPixelStorei(GLenum pname, GLint param)
{
    return glbinding::Binding::PixelStorei(pname, param);
}

void glPixelTransferf(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PixelTransferf(pname, param);
}

void glPixelTransferi(GLenum pname, GLint param)
{
    return glbinding::Binding::PixelTransferi(pname, param);
}

void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
    return glbinding::Binding::PixelZoom(xfactor, yfactor);
}

void glPointParameterf(GLenum pname, GLfloat param)
{
    return glbinding::Binding::PointParameterf(pname, param);
}

void glPointParameterfv(GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::PointParameterfv(pname, params);
}

void glPointParameteri(GLenum pname, GLint param)
{
    return glbinding::Binding::PointParameteri(pname, param);
}

void glPointParameteriv(GLenum pname, const GLint * params)
{
    return glbinding::Binding::PointParameteriv(pname, params);
}

void glPointSize(GLfloat size)
{
    return glbinding::Binding::PointSize(size);
}

void glPolygonMode(GLenum face, GLenum mode)
{
    return glbinding::Binding::PolygonMode(face, mode);
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return glbinding::Binding::PolygonOffset(factor, units);
}

void glPolygonStipple(const GLubyte * mask)
{
    return glbinding::Binding::PolygonStipple(mask);
}

void glPopAttrib()
{
    return glbinding::Binding::PopAttrib();
}

void glPopClientAttrib()
{
    return glbinding::Binding::PopClientAttrib();
}

void glPopDebugGroup()
{
    return glbinding::Binding::PopDebugGroup();
}

void glPopMatrix()
{
    return glbinding::Binding::PopMatrix();
}

void glPopName()
{
    return glbinding::Binding::PopName();
}

void glPrimitiveRestartIndex(GLuint index)
{
    return glbinding::Binding::PrimitiveRestartIndex(index);
}

void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities)
{
    return glbinding::Binding::PrioritizeTextures(n, textures, priorities);
}

void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return glbinding::Binding::ProgramBinary(program, binaryFormat, binary, length);
}

void glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
    return glbinding::Binding::ProgramParameteri(program, pname, value);
}

void glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
    return glbinding::Binding::ProgramUniform1d(program, location, v0);
}

void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform1dv(program, location, count, value);
}

void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
    return glbinding::Binding::ProgramUniform1f(program, location, v0);
}

void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform1fv(program, location, count, value);
}

void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
    return glbinding::Binding::ProgramUniform1i(program, location, v0);
}

void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform1iv(program, location, count, value);
}

void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
    return glbinding::Binding::ProgramUniform1ui(program, location, v0);
}

void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform1uiv(program, location, count, value);
}

void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
    return glbinding::Binding::ProgramUniform2d(program, location, v0, v1);
}

void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform2dv(program, location, count, value);
}

void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::Binding::ProgramUniform2f(program, location, v0, v1);
}

void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform2fv(program, location, count, value);
}

void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
    return glbinding::Binding::ProgramUniform2i(program, location, v0, v1);
}

void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform2iv(program, location, count, value);
}

void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
    return glbinding::Binding::ProgramUniform2ui(program, location, v0, v1);
}

void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform2uiv(program, location, count, value);
}

void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
    return glbinding::Binding::ProgramUniform3d(program, location, v0, v1, v2);
}

void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform3dv(program, location, count, value);
}

void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::Binding::ProgramUniform3f(program, location, v0, v1, v2);
}

void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform3fv(program, location, count, value);
}

void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::Binding::ProgramUniform3i(program, location, v0, v1, v2);
}

void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform3iv(program, location, count, value);
}

void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::Binding::ProgramUniform3ui(program, location, v0, v1, v2);
}

void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform3uiv(program, location, count, value);
}

void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
    return glbinding::Binding::ProgramUniform4d(program, location, v0, v1, v2, v3);
}

void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniform4dv(program, location, count, value);
}

void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::Binding::ProgramUniform4f(program, location, v0, v1, v2, v3);
}

void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniform4fv(program, location, count, value);
}

void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::Binding::ProgramUniform4i(program, location, v0, v1, v2, v3);
}

void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::ProgramUniform4iv(program, location, count, value);
}

void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::Binding::ProgramUniform4ui(program, location, v0, v1, v2, v3);
}

void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::ProgramUniform4uiv(program, location, count, value);
}

void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix3fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix4dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix4fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x2dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x3dv(program, location, count, transpose, value);
}

void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::ProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

void glProvokingVertex(GLenum mode)
{
    return glbinding::Binding::ProvokingVertex(mode);
}

void glPushAttrib(AttribMask mask)
{
    return glbinding::Binding::PushAttrib(mask);
}

void glPushClientAttrib(ClientAttribMask mask)
{
    return glbinding::Binding::PushClientAttrib(mask);
}

void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
    return glbinding::Binding::PushDebugGroup(source, id, length, message);
}

void glPushMatrix()
{
    return glbinding::Binding::PushMatrix();
}

void glPushName(GLuint name)
{
    return glbinding::Binding::PushName(name);
}

void glQueryCounter(GLuint id, GLenum target)
{
    return glbinding::Binding::QueryCounter(id, target);
}

void glRasterPos2d(GLdouble x, GLdouble y)
{
    return glbinding::Binding::RasterPos2d(x, y);
}

void glRasterPos2dv(const GLdouble * v)
{
    return glbinding::Binding::RasterPos2dv(v);
}

void glRasterPos2f(GLfloat x, GLfloat y)
{
    return glbinding::Binding::RasterPos2f(x, y);
}

void glRasterPos2fv(const GLfloat * v)
{
    return glbinding::Binding::RasterPos2fv(v);
}

void glRasterPos2i(GLint x, GLint y)
{
    return glbinding::Binding::RasterPos2i(x, y);
}

void glRasterPos2iv(const GLint * v)
{
    return glbinding::Binding::RasterPos2iv(v);
}

void glRasterPos2s(GLshort x, GLshort y)
{
    return glbinding::Binding::RasterPos2s(x, y);
}

void glRasterPos2sv(const GLshort * v)
{
    return glbinding::Binding::RasterPos2sv(v);
}

void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::RasterPos3d(x, y, z);
}

void glRasterPos3dv(const GLdouble * v)
{
    return glbinding::Binding::RasterPos3dv(v);
}

void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::RasterPos3f(x, y, z);
}

void glRasterPos3fv(const GLfloat * v)
{
    return glbinding::Binding::RasterPos3fv(v);
}

void glRasterPos3i(GLint x, GLint y, GLint z)
{
    return glbinding::Binding::RasterPos3i(x, y, z);
}

void glRasterPos3iv(const GLint * v)
{
    return glbinding::Binding::RasterPos3iv(v);
}

void glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
    return glbinding::Binding::RasterPos3s(x, y, z);
}

void glRasterPos3sv(const GLshort * v)
{
    return glbinding::Binding::RasterPos3sv(v);
}

void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::RasterPos4d(x, y, z, w);
}

void glRasterPos4dv(const GLdouble * v)
{
    return glbinding::Binding::RasterPos4dv(v);
}

void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::RasterPos4f(x, y, z, w);
}

void glRasterPos4fv(const GLfloat * v)
{
    return glbinding::Binding::RasterPos4fv(v);
}

void glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::Binding::RasterPos4i(x, y, z, w);
}

void glRasterPos4iv(const GLint * v)
{
    return glbinding::Binding::RasterPos4iv(v);
}

void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::Binding::RasterPos4s(x, y, z, w);
}

void glRasterPos4sv(const GLshort * v)
{
    return glbinding::Binding::RasterPos4sv(v);
}

void glReadBuffer(GLenum src)
{
    return glbinding::Binding::ReadBuffer(src);
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return glbinding::Binding::ReadPixels(x, y, width, height, format, type, pixels);
}

void glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return glbinding::Binding::ReadnPixels(x, y, width, height, format, type, bufSize, data);
}

void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
    return glbinding::Binding::Rectd(x1, y1, x2, y2);
}

void glRectdv(const GLdouble * v1, const GLdouble * v2)
{
    return glbinding::Binding::Rectdv(v1, v2);
}

void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
    return glbinding::Binding::Rectf(x1, y1, x2, y2);
}

void glRectfv(const GLfloat * v1, const GLfloat * v2)
{
    return glbinding::Binding::Rectfv(v1, v2);
}

void glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
    return glbinding::Binding::Recti(x1, y1, x2, y2);
}

void glRectiv(const GLint * v1, const GLint * v2)
{
    return glbinding::Binding::Rectiv(v1, v2);
}

void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
    return glbinding::Binding::Rects(x1, y1, x2, y2);
}

void glRectsv(const GLshort * v1, const GLshort * v2)
{
    return glbinding::Binding::Rectsv(v1, v2);
}

void glReleaseShaderCompiler()
{
    return glbinding::Binding::ReleaseShaderCompiler();
}

GLint glRenderMode(GLenum mode)
{
    return glbinding::Binding::RenderMode(mode);
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::RenderbufferStorage(target, internalformat, width, height);
}

void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::RenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void glResumeTransformFeedback()
{
    return glbinding::Binding::ResumeTransformFeedback();
}

void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::Rotated(angle, x, y, z);
}

void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::Rotatef(angle, x, y, z);
}

void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return glbinding::Binding::SampleCoverage(value, invert);
}

void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
    return glbinding::Binding::SampleMaski(maskNumber, mask);
}

void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param)
{
    return glbinding::Binding::SamplerParameterIiv(sampler, pname, param);
}

void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param)
{
    return glbinding::Binding::SamplerParameterIuiv(sampler, pname, param);
}

void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
    return glbinding::Binding::SamplerParameterf(sampler, pname, param);
}

void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
    return glbinding::Binding::SamplerParameterfv(sampler, pname, param);
}

void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
    return glbinding::Binding::SamplerParameteri(sampler, pname, param);
}

void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
    return glbinding::Binding::SamplerParameteriv(sampler, pname, param);
}

void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::Scaled(x, y, z);
}

void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::Scalef(x, y, z);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::Scissor(x, y, width, height);
}

void glScissorArrayv(GLuint first, GLsizei count, const GLint * v)
{
    return glbinding::Binding::ScissorArrayv(first, count, v);
}

void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return glbinding::Binding::ScissorIndexed(index, left, bottom, width, height);
}

void glScissorIndexedv(GLuint index, const GLint * v)
{
    return glbinding::Binding::ScissorIndexedv(index, v);
}

void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return glbinding::Binding::SecondaryColor3b(red, green, blue);
}

void glSecondaryColor3bv(const GLbyte * v)
{
    return glbinding::Binding::SecondaryColor3bv(v);
}

void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return glbinding::Binding::SecondaryColor3d(red, green, blue);
}

void glSecondaryColor3dv(const GLdouble * v)
{
    return glbinding::Binding::SecondaryColor3dv(v);
}

void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return glbinding::Binding::SecondaryColor3f(red, green, blue);
}

void glSecondaryColor3fv(const GLfloat * v)
{
    return glbinding::Binding::SecondaryColor3fv(v);
}

void glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
    return glbinding::Binding::SecondaryColor3i(red, green, blue);
}

void glSecondaryColor3iv(const GLint * v)
{
    return glbinding::Binding::SecondaryColor3iv(v);
}

void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
    return glbinding::Binding::SecondaryColor3s(red, green, blue);
}

void glSecondaryColor3sv(const GLshort * v)
{
    return glbinding::Binding::SecondaryColor3sv(v);
}

void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return glbinding::Binding::SecondaryColor3ub(red, green, blue);
}

void glSecondaryColor3ubv(const GLubyte * v)
{
    return glbinding::Binding::SecondaryColor3ubv(v);
}

void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return glbinding::Binding::SecondaryColor3ui(red, green, blue);
}

void glSecondaryColor3uiv(const GLuint * v)
{
    return glbinding::Binding::SecondaryColor3uiv(v);
}

void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
    return glbinding::Binding::SecondaryColor3us(red, green, blue);
}

void glSecondaryColor3usv(const GLushort * v)
{
    return glbinding::Binding::SecondaryColor3usv(v);
}

void glSecondaryColorP3ui(GLenum type, GLuint color)
{
    return glbinding::Binding::SecondaryColorP3ui(type, color);
}

void glSecondaryColorP3uiv(GLenum type, const GLuint * color)
{
    return glbinding::Binding::SecondaryColorP3uiv(type, color);
}

void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::SecondaryColorPointer(size, type, stride, pointer);
}

void glSelectBuffer(GLsizei size, GLuint * buffer)
{
    return glbinding::Binding::SelectBuffer(size, buffer);
}

void glShadeModel(GLenum mode)
{
    return glbinding::Binding::ShadeModel(mode);
}

void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
    return glbinding::Binding::ShaderBinary(count, shaders, binaryformat, binary, length);
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return glbinding::Binding::ShaderSource(shader, count, string, length);
}

void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
    return glbinding::Binding::ShaderStorageBlockBinding(program, storageBlockIndex, storageBlockBinding);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return glbinding::Binding::StencilFunc(func, ref, mask);
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return glbinding::Binding::StencilFuncSeparate(face, func, ref, mask);
}

void glStencilMask(GLuint mask)
{
    return glbinding::Binding::StencilMask(mask);
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return glbinding::Binding::StencilMaskSeparate(face, mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return glbinding::Binding::StencilOp(fail, zfail, zpass);
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glbinding::Binding::StencilOpSeparate(face, sfail, dpfail, dppass);
}

void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
    return glbinding::Binding::TexBuffer(target, internalformat, buffer);
}

void glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::TexBufferRange(target, internalformat, buffer, offset, size);
}

void glTexCoord1d(GLdouble s)
{
    return glbinding::Binding::TexCoord1d(s);
}

void glTexCoord1dv(const GLdouble * v)
{
    return glbinding::Binding::TexCoord1dv(v);
}

void glTexCoord1f(GLfloat s)
{
    return glbinding::Binding::TexCoord1f(s);
}

void glTexCoord1fv(const GLfloat * v)
{
    return glbinding::Binding::TexCoord1fv(v);
}

void glTexCoord1i(GLint s)
{
    return glbinding::Binding::TexCoord1i(s);
}

void glTexCoord1iv(const GLint * v)
{
    return glbinding::Binding::TexCoord1iv(v);
}

void glTexCoord1s(GLshort s)
{
    return glbinding::Binding::TexCoord1s(s);
}

void glTexCoord1sv(const GLshort * v)
{
    return glbinding::Binding::TexCoord1sv(v);
}

void glTexCoord2d(GLdouble s, GLdouble t)
{
    return glbinding::Binding::TexCoord2d(s, t);
}

void glTexCoord2dv(const GLdouble * v)
{
    return glbinding::Binding::TexCoord2dv(v);
}

void glTexCoord2f(GLfloat s, GLfloat t)
{
    return glbinding::Binding::TexCoord2f(s, t);
}

void glTexCoord2fv(const GLfloat * v)
{
    return glbinding::Binding::TexCoord2fv(v);
}

void glTexCoord2i(GLint s, GLint t)
{
    return glbinding::Binding::TexCoord2i(s, t);
}

void glTexCoord2iv(const GLint * v)
{
    return glbinding::Binding::TexCoord2iv(v);
}

void glTexCoord2s(GLshort s, GLshort t)
{
    return glbinding::Binding::TexCoord2s(s, t);
}

void glTexCoord2sv(const GLshort * v)
{
    return glbinding::Binding::TexCoord2sv(v);
}

void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
    return glbinding::Binding::TexCoord3d(s, t, r);
}

void glTexCoord3dv(const GLdouble * v)
{
    return glbinding::Binding::TexCoord3dv(v);
}

void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
    return glbinding::Binding::TexCoord3f(s, t, r);
}

void glTexCoord3fv(const GLfloat * v)
{
    return glbinding::Binding::TexCoord3fv(v);
}

void glTexCoord3i(GLint s, GLint t, GLint r)
{
    return glbinding::Binding::TexCoord3i(s, t, r);
}

void glTexCoord3iv(const GLint * v)
{
    return glbinding::Binding::TexCoord3iv(v);
}

void glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
    return glbinding::Binding::TexCoord3s(s, t, r);
}

void glTexCoord3sv(const GLshort * v)
{
    return glbinding::Binding::TexCoord3sv(v);
}

void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return glbinding::Binding::TexCoord4d(s, t, r, q);
}

void glTexCoord4dv(const GLdouble * v)
{
    return glbinding::Binding::TexCoord4dv(v);
}

void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return glbinding::Binding::TexCoord4f(s, t, r, q);
}

void glTexCoord4fv(const GLfloat * v)
{
    return glbinding::Binding::TexCoord4fv(v);
}

void glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
    return glbinding::Binding::TexCoord4i(s, t, r, q);
}

void glTexCoord4iv(const GLint * v)
{
    return glbinding::Binding::TexCoord4iv(v);
}

void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
    return glbinding::Binding::TexCoord4s(s, t, r, q);
}

void glTexCoord4sv(const GLshort * v)
{
    return glbinding::Binding::TexCoord4sv(v);
}

void glTexCoordP1ui(GLenum type, GLuint coords)
{
    return glbinding::Binding::TexCoordP1ui(type, coords);
}

void glTexCoordP1uiv(GLenum type, const GLuint * coords)
{
    return glbinding::Binding::TexCoordP1uiv(type, coords);
}

void glTexCoordP2ui(GLenum type, GLuint coords)
{
    return glbinding::Binding::TexCoordP2ui(type, coords);
}

void glTexCoordP2uiv(GLenum type, const GLuint * coords)
{
    return glbinding::Binding::TexCoordP2uiv(type, coords);
}

void glTexCoordP3ui(GLenum type, GLuint coords)
{
    return glbinding::Binding::TexCoordP3ui(type, coords);
}

void glTexCoordP3uiv(GLenum type, const GLuint * coords)
{
    return glbinding::Binding::TexCoordP3uiv(type, coords);
}

void glTexCoordP4ui(GLenum type, GLuint coords)
{
    return glbinding::Binding::TexCoordP4ui(type, coords);
}

void glTexCoordP4uiv(GLenum type, const GLuint * coords)
{
    return glbinding::Binding::TexCoordP4uiv(type, coords);
}

void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::TexCoordPointer(size, type, stride, pointer);
}

void glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::Binding::TexEnvf(target, pname, param);
}

void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::TexEnvfv(target, pname, params);
}

void glTexEnvi(GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::TexEnvi(target, pname, param);
}

void glTexEnviv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TexEnviv(target, pname, params);
}

void glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
    return glbinding::Binding::TexGend(coord, pname, param);
}

void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params)
{
    return glbinding::Binding::TexGendv(coord, pname, params);
}

void glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
    return glbinding::Binding::TexGenf(coord, pname, param);
}

void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::TexGenfv(coord, pname, params);
}

void glTexGeni(GLenum coord, GLenum pname, GLint param)
{
    return glbinding::Binding::TexGeni(coord, pname, param);
}

void glTexGeniv(GLenum coord, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TexGeniv(coord, pname, params);
}

void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexParameterIiv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TexParameterIiv(target, pname, params);
}

void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint * params)
{
    return glbinding::Binding::TexParameterIuiv(target, pname, params);
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return glbinding::Binding::TexParameterf(target, pname, param);
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return glbinding::Binding::TexParameterfv(target, pname, params);
}

void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return glbinding::Binding::TexParameteri(target, pname, param);
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TexParameteriv(target, pname, params);
}

void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::Binding::TexStorage1D(target, levels, internalformat, width);
}

void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::TexStorage2D(target, levels, internalformat, width, height);
}

void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::Binding::TexStorage3D(target, levels, internalformat, width, height, depth);
}

void glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTextureBarrier()
{
    return glbinding::Binding::TextureBarrier();
}

void glTextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer)
{
    return glbinding::Binding::TextureBuffer(texture, internalformat, buffer);
}

void glTextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::TextureBufferRange(texture, internalformat, buffer, offset, size);
}

void glTextureParameterIiv(GLuint texture, GLenum pname, const GLint * params)
{
    return glbinding::Binding::TextureParameterIiv(texture, pname, params);
}

void glTextureParameterIuiv(GLuint texture, GLenum pname, const GLuint * params)
{
    return glbinding::Binding::TextureParameterIuiv(texture, pname, params);
}

void glTextureParameterf(GLuint texture, GLenum pname, GLfloat param)
{
    return glbinding::Binding::TextureParameterf(texture, pname, param);
}

void glTextureParameterfv(GLuint texture, GLenum pname, const GLfloat * param)
{
    return glbinding::Binding::TextureParameterfv(texture, pname, param);
}

void glTextureParameteri(GLuint texture, GLenum pname, GLint param)
{
    return glbinding::Binding::TextureParameteri(texture, pname, param);
}

void glTextureParameteriv(GLuint texture, GLenum pname, const GLint * param)
{
    return glbinding::Binding::TextureParameteriv(texture, pname, param);
}

void glTextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width)
{
    return glbinding::Binding::TextureStorage1D(texture, levels, internalformat, width);
}

void glTextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glbinding::Binding::TextureStorage2D(texture, levels, internalformat, width, height);
}

void glTextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TextureStorage2DMultisample(texture, samples, internalformat, width, height, fixedsamplelocations);
}

void glTextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
    return glbinding::Binding::TextureStorage3D(texture, levels, internalformat, width, height, depth);
}

void glTextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
    return glbinding::Binding::TextureStorage3DMultisample(texture, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void glTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage1D(texture, level, xoffset, width, format, type, pixels);
}

void glTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage2D(texture, level, xoffset, yoffset, width, height, format, type, pixels);
}

void glTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::Binding::TextureSubImage3D(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
    return glbinding::Binding::TextureView(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

void glTransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer)
{
    return glbinding::Binding::TransformFeedbackBufferBase(xfb, index, buffer);
}

void glTransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glbinding::Binding::TransformFeedbackBufferRange(xfb, index, buffer, offset, size);
}

void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
    return glbinding::Binding::TransformFeedbackVaryings(program, count, varyings, bufferMode);
}

void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::Translated(x, y, z);
}

void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::Translatef(x, y, z);
}

void glUniform1d(GLint location, GLdouble x)
{
    return glbinding::Binding::Uniform1d(location, x);
}

void glUniform1dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::Uniform1dv(location, count, value);
}

void glUniform1f(GLint location, GLfloat v0)
{
    return glbinding::Binding::Uniform1f(location, v0);
}

void glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::Uniform1fv(location, count, value);
}

void glUniform1i(GLint location, GLint v0)
{
    return glbinding::Binding::Uniform1i(location, v0);
}

void glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::Uniform1iv(location, count, value);
}

void glUniform1ui(GLint location, GLuint v0)
{
    return glbinding::Binding::Uniform1ui(location, v0);
}

void glUniform1uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::Uniform1uiv(location, count, value);
}

void glUniform2d(GLint location, GLdouble x, GLdouble y)
{
    return glbinding::Binding::Uniform2d(location, x, y);
}

void glUniform2dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::Uniform2dv(location, count, value);
}

void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
    return glbinding::Binding::Uniform2f(location, v0, v1);
}

void glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::Uniform2fv(location, count, value);
}

void glUniform2i(GLint location, GLint v0, GLint v1)
{
    return glbinding::Binding::Uniform2i(location, v0, v1);
}

void glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::Uniform2iv(location, count, value);
}

void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
    return glbinding::Binding::Uniform2ui(location, v0, v1);
}

void glUniform2uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::Uniform2uiv(location, count, value);
}

void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::Uniform3d(location, x, y, z);
}

void glUniform3dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::Uniform3dv(location, count, value);
}

void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
    return glbinding::Binding::Uniform3f(location, v0, v1, v2);
}

void glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::Uniform3fv(location, count, value);
}

void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
    return glbinding::Binding::Uniform3i(location, v0, v1, v2);
}

void glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::Uniform3iv(location, count, value);
}

void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
    return glbinding::Binding::Uniform3ui(location, v0, v1, v2);
}

void glUniform3uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::Uniform3uiv(location, count, value);
}

void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::Uniform4d(location, x, y, z, w);
}

void glUniform4dv(GLint location, GLsizei count, const GLdouble * value)
{
    return glbinding::Binding::Uniform4dv(location, count, value);
}

void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
    return glbinding::Binding::Uniform4f(location, v0, v1, v2, v3);
}

void glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
    return glbinding::Binding::Uniform4fv(location, count, value);
}

void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
    return glbinding::Binding::Uniform4i(location, v0, v1, v2, v3);
}

void glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
    return glbinding::Binding::Uniform4iv(location, count, value);
}

void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
    return glbinding::Binding::Uniform4ui(location, v0, v1, v2, v3);
}

void glUniform4uiv(GLint location, GLsizei count, const GLuint * value)
{
    return glbinding::Binding::Uniform4uiv(location, count, value);
}

void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
    return glbinding::Binding::UniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix2dv(location, count, transpose, value);
}

void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix2fv(location, count, transpose, value);
}

void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix2x3dv(location, count, transpose, value);
}

void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix2x3fv(location, count, transpose, value);
}

void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix2x4dv(location, count, transpose, value);
}

void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix2x4fv(location, count, transpose, value);
}

void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix3dv(location, count, transpose, value);
}

void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix3fv(location, count, transpose, value);
}

void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix3x2dv(location, count, transpose, value);
}

void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix3x2fv(location, count, transpose, value);
}

void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix3x4dv(location, count, transpose, value);
}

void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix3x4fv(location, count, transpose, value);
}

void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix4dv(location, count, transpose, value);
}

void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix4fv(location, count, transpose, value);
}

void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix4x2dv(location, count, transpose, value);
}

void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix4x2fv(location, count, transpose, value);
}

void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
    return glbinding::Binding::UniformMatrix4x3dv(location, count, transpose, value);
}

void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::Binding::UniformMatrix4x3fv(location, count, transpose, value);
}

void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint * indices)
{
    return glbinding::Binding::UniformSubroutinesuiv(shadertype, count, indices);
}

GLboolean glUnmapBuffer(GLenum target)
{
    return glbinding::Binding::UnmapBuffer(target);
}

GLboolean glUnmapNamedBuffer(GLuint buffer)
{
    return glbinding::Binding::UnmapNamedBuffer(buffer);
}

void glUseProgram(GLuint program)
{
    return glbinding::Binding::UseProgram(program);
}

void glUseProgramStages(GLuint pipeline, UseProgramStageMask stages, GLuint program)
{
    return glbinding::Binding::UseProgramStages(pipeline, stages, program);
}

void glValidateProgram(GLuint program)
{
    return glbinding::Binding::ValidateProgram(program);
}

void glValidateProgramPipeline(GLuint pipeline)
{
    return glbinding::Binding::ValidateProgramPipeline(pipeline);
}

void glVertex2d(GLdouble x, GLdouble y)
{
    return glbinding::Binding::Vertex2d(x, y);
}

void glVertex2dv(const GLdouble * v)
{
    return glbinding::Binding::Vertex2dv(v);
}

void glVertex2f(GLfloat x, GLfloat y)
{
    return glbinding::Binding::Vertex2f(x, y);
}

void glVertex2fv(const GLfloat * v)
{
    return glbinding::Binding::Vertex2fv(v);
}

void glVertex2i(GLint x, GLint y)
{
    return glbinding::Binding::Vertex2i(x, y);
}

void glVertex2iv(const GLint * v)
{
    return glbinding::Binding::Vertex2iv(v);
}

void glVertex2s(GLshort x, GLshort y)
{
    return glbinding::Binding::Vertex2s(x, y);
}

void glVertex2sv(const GLshort * v)
{
    return glbinding::Binding::Vertex2sv(v);
}

void glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::Vertex3d(x, y, z);
}

void glVertex3dv(const GLdouble * v)
{
    return glbinding::Binding::Vertex3dv(v);
}

void glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::Vertex3f(x, y, z);
}

void glVertex3fv(const GLfloat * v)
{
    return glbinding::Binding::Vertex3fv(v);
}

void glVertex3i(GLint x, GLint y, GLint z)
{
    return glbinding::Binding::Vertex3i(x, y, z);
}

void glVertex3iv(const GLint * v)
{
    return glbinding::Binding::Vertex3iv(v);
}

void glVertex3s(GLshort x, GLshort y, GLshort z)
{
    return glbinding::Binding::Vertex3s(x, y, z);
}

void glVertex3sv(const GLshort * v)
{
    return glbinding::Binding::Vertex3sv(v);
}

void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::Vertex4d(x, y, z, w);
}

void glVertex4dv(const GLdouble * v)
{
    return glbinding::Binding::Vertex4dv(v);
}

void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::Vertex4f(x, y, z, w);
}

void glVertex4fv(const GLfloat * v)
{
    return glbinding::Binding::Vertex4fv(v);
}

void glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::Binding::Vertex4i(x, y, z, w);
}

void glVertex4iv(const GLint * v)
{
    return glbinding::Binding::Vertex4iv(v);
}

void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::Binding::Vertex4s(x, y, z, w);
}

void glVertex4sv(const GLshort * v)
{
    return glbinding::Binding::Vertex4sv(v);
}

void glVertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
    return glbinding::Binding::VertexArrayAttribBinding(vaobj, attribindex, bindingindex);
}

void glVertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return glbinding::Binding::VertexArrayAttribFormat(vaobj, attribindex, size, type, normalized, relativeoffset);
}

void glVertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::Binding::VertexArrayAttribIFormat(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::Binding::VertexArrayAttribLFormat(vaobj, attribindex, size, type, relativeoffset);
}

void glVertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
    return glbinding::Binding::VertexArrayBindingDivisor(vaobj, bindingindex, divisor);
}

void glVertexArrayElementBuffer(GLuint vaobj, GLuint buffer)
{
    return glbinding::Binding::VertexArrayElementBuffer(vaobj, buffer);
}

void glVertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glbinding::Binding::VertexArrayVertexBuffer(vaobj, bindingindex, buffer, offset, stride);
}

void glVertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
    return glbinding::Binding::VertexArrayVertexBuffers(vaobj, first, count, buffers, offsets, strides);
}

void glVertexAttrib1d(GLuint index, GLdouble x)
{
    return glbinding::Binding::VertexAttrib1d(index, x);
}

void glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib1dv(index, v);
}

void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return glbinding::Binding::VertexAttrib1f(index, x);
}

void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib1fv(index, v);
}

void glVertexAttrib1s(GLuint index, GLshort x)
{
    return glbinding::Binding::VertexAttrib1s(index, x);
}

void glVertexAttrib1sv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib1sv(index, v);
}

void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::Binding::VertexAttrib2d(index, x, y);
}

void glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib2dv(index, v);
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return glbinding::Binding::VertexAttrib2f(index, x, y);
}

void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib2fv(index, v);
}

void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
    return glbinding::Binding::VertexAttrib2s(index, x, y);
}

void glVertexAttrib2sv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib2sv(index, v);
}

void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::VertexAttrib3d(index, x, y, z);
}

void glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib3dv(index, v);
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::VertexAttrib3f(index, x, y, z);
}

void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib3fv(index, v);
}

void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
    return glbinding::Binding::VertexAttrib3s(index, x, y, z);
}

void glVertexAttrib3sv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib3sv(index, v);
}

void glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
    return glbinding::Binding::VertexAttrib4Nbv(index, v);
}

void glVertexAttrib4Niv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttrib4Niv(index, v);
}

void glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib4Nsv(index, v);
}

void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
    return glbinding::Binding::VertexAttrib4Nub(index, x, y, z, w);
}

void glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
    return glbinding::Binding::VertexAttrib4Nubv(index, v);
}

void glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttrib4Nuiv(index, v);
}

void glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
    return glbinding::Binding::VertexAttrib4Nusv(index, v);
}

void glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
    return glbinding::Binding::VertexAttrib4bv(index, v);
}

void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::VertexAttrib4d(index, x, y, z, w);
}

void glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttrib4dv(index, v);
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glbinding::Binding::VertexAttrib4f(index, x, y, z, w);
}

void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::VertexAttrib4fv(index, v);
}

void glVertexAttrib4iv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttrib4iv(index, v);
}

void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
    return glbinding::Binding::VertexAttrib4s(index, x, y, z, w);
}

void glVertexAttrib4sv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttrib4sv(index, v);
}

void glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
    return glbinding::Binding::VertexAttrib4ubv(index, v);
}

void glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttrib4uiv(index, v);
}

void glVertexAttrib4usv(GLuint index, const GLushort * v)
{
    return glbinding::Binding::VertexAttrib4usv(index, v);
}

void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
    return glbinding::Binding::VertexAttribBinding(attribindex, bindingindex);
}

void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
    return glbinding::Binding::VertexAttribDivisor(index, divisor);
}

void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return glbinding::Binding::VertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

void glVertexAttribI1i(GLuint index, GLint x)
{
    return glbinding::Binding::VertexAttribI1i(index, x);
}

void glVertexAttribI1iv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttribI1iv(index, v);
}

void glVertexAttribI1ui(GLuint index, GLuint x)
{
    return glbinding::Binding::VertexAttribI1ui(index, x);
}

void glVertexAttribI1uiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttribI1uiv(index, v);
}

void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
    return glbinding::Binding::VertexAttribI2i(index, x, y);
}

void glVertexAttribI2iv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttribI2iv(index, v);
}

void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
    return glbinding::Binding::VertexAttribI2ui(index, x, y);
}

void glVertexAttribI2uiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttribI2uiv(index, v);
}

void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
    return glbinding::Binding::VertexAttribI3i(index, x, y, z);
}

void glVertexAttribI3iv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttribI3iv(index, v);
}

void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
    return glbinding::Binding::VertexAttribI3ui(index, x, y, z);
}

void glVertexAttribI3uiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttribI3uiv(index, v);
}

void glVertexAttribI4bv(GLuint index, const GLbyte * v)
{
    return glbinding::Binding::VertexAttribI4bv(index, v);
}

void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glbinding::Binding::VertexAttribI4i(index, x, y, z, w);
}

void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return glbinding::Binding::VertexAttribI4iv(index, v);
}

void glVertexAttribI4sv(GLuint index, const GLshort * v)
{
    return glbinding::Binding::VertexAttribI4sv(index, v);
}

void glVertexAttribI4ubv(GLuint index, const GLubyte * v)
{
    return glbinding::Binding::VertexAttribI4ubv(index, v);
}

void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glbinding::Binding::VertexAttribI4ui(index, x, y, z, w);
}

void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return glbinding::Binding::VertexAttribI4uiv(index, v);
}

void glVertexAttribI4usv(GLuint index, const GLushort * v)
{
    return glbinding::Binding::VertexAttribI4usv(index, v);
}

void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::Binding::VertexAttribIFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::VertexAttribIPointer(index, size, type, stride, pointer);
}

void glVertexAttribL1d(GLuint index, GLdouble x)
{
    return glbinding::Binding::VertexAttribL1d(index, x);
}

void glVertexAttribL1dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttribL1dv(index, v);
}

void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
    return glbinding::Binding::VertexAttribL2d(index, x, y);
}

void glVertexAttribL2dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttribL2dv(index, v);
}

void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::VertexAttribL3d(index, x, y, z);
}

void glVertexAttribL3dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttribL3dv(index, v);
}

void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return glbinding::Binding::VertexAttribL4d(index, x, y, z, w);
}

void glVertexAttribL4dv(GLuint index, const GLdouble * v)
{
    return glbinding::Binding::VertexAttribL4dv(index, v);
}

void glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glbinding::Binding::VertexAttribLFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::VertexAttribLPointer(index, size, type, stride, pointer);
}

void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::Binding::VertexAttribP1ui(index, type, normalized, value);
}

void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::Binding::VertexAttribP1uiv(index, type, normalized, value);
}

void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::Binding::VertexAttribP2ui(index, type, normalized, value);
}

void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::Binding::VertexAttribP2uiv(index, type, normalized, value);
}

void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::Binding::VertexAttribP3ui(index, type, normalized, value);
}

void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::Binding::VertexAttribP3uiv(index, type, normalized, value);
}

void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
    return glbinding::Binding::VertexAttribP4ui(index, type, normalized, value);
}

void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
    return glbinding::Binding::VertexAttribP4uiv(index, type, normalized, value);
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
    return glbinding::Binding::VertexBindingDivisor(bindingindex, divisor);
}

void glVertexP2ui(GLenum type, GLuint value)
{
    return glbinding::Binding::VertexP2ui(type, value);
}

void glVertexP2uiv(GLenum type, const GLuint * value)
{
    return glbinding::Binding::VertexP2uiv(type, value);
}

void glVertexP3ui(GLenum type, GLuint value)
{
    return glbinding::Binding::VertexP3ui(type, value);
}

void glVertexP3uiv(GLenum type, const GLuint * value)
{
    return glbinding::Binding::VertexP3uiv(type, value);
}

void glVertexP4ui(GLenum type, GLuint value)
{
    return glbinding::Binding::VertexP4ui(type, value);
}

void glVertexP4uiv(GLenum type, const GLuint * value)
{
    return glbinding::Binding::VertexP4uiv(type, value);
}

void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glbinding::Binding::VertexPointer(size, type, stride, pointer);
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::Binding::Viewport(x, y, width, height);
}

void glViewportArrayv(GLuint first, GLsizei count, const GLfloat * v)
{
    return glbinding::Binding::ViewportArrayv(first, count, v);
}

void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return glbinding::Binding::ViewportIndexedf(index, x, y, w, h);
}

void glViewportIndexedfv(GLuint index, const GLfloat * v)
{
    return glbinding::Binding::ViewportIndexedfv(index, v);
}

void glWaitSync(GLsync sync, UnusedMask flags, GLuint64 timeout)
{
    return glbinding::Binding::WaitSync(sync, flags, timeout);
}

void glWindowPos2d(GLdouble x, GLdouble y)
{
    return glbinding::Binding::WindowPos2d(x, y);
}

void glWindowPos2dv(const GLdouble * v)
{
    return glbinding::Binding::WindowPos2dv(v);
}

void glWindowPos2f(GLfloat x, GLfloat y)
{
    return glbinding::Binding::WindowPos2f(x, y);
}

void glWindowPos2fv(const GLfloat * v)
{
    return glbinding::Binding::WindowPos2fv(v);
}

void glWindowPos2i(GLint x, GLint y)
{
    return glbinding::Binding::WindowPos2i(x, y);
}

void glWindowPos2iv(const GLint * v)
{
    return glbinding::Binding::WindowPos2iv(v);
}

void glWindowPos2s(GLshort x, GLshort y)
{
    return glbinding::Binding::WindowPos2s(x, y);
}

void glWindowPos2sv(const GLshort * v)
{
    return glbinding::Binding::WindowPos2sv(v);
}

void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return glbinding::Binding::WindowPos3d(x, y, z);
}

void glWindowPos3dv(const GLdouble * v)
{
    return glbinding::Binding::WindowPos3dv(v);
}

void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return glbinding::Binding::WindowPos3f(x, y, z);
}

void glWindowPos3fv(const GLfloat * v)
{
    return glbinding::Binding::WindowPos3fv(v);
}

void glWindowPos3i(GLint x, GLint y, GLint z)
{
    return glbinding::Binding::WindowPos3i(x, y, z);
}

void glWindowPos3iv(const GLint * v)
{
    return glbinding::Binding::WindowPos3iv(v);
}

void glWindowPos3s(GLshort x, GLshort y, GLshort z)
{
    return glbinding::Binding::WindowPos3s(x, y, z);
}

void glWindowPos3sv(const GLshort * v)
{
    return glbinding::Binding::WindowPos3sv(v);
}


} // namespace gl45
