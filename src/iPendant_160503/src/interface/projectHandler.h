/*
* License:The MIT License (MIT)
*
* Copyright (c) 2013,2014 Yongzhuo Gao
* State Key Laboratory of Robotics and System, Harbin Institute of Technology
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/

#ifndef PROJECTHANDLER_H
#define PROJECTHANDLER_H

#include "res.h"
#include "project.h"
#include "commandProcessor.h"

class ProjectHandler : public QObject
{
    Q_OBJECT

public:
    ProjectHandler();

    // Project load functions
    void loadBasicInfo(const QStringList &basicInfo);

    void loadPoints(const QStringList &points);

    void loadFileText(Project *project);

    void loadProject(Project *proj, Interpreter * interpreters);

    // Project save functions ( Accessible from GUI )
    void saveFile(Project *project);

    void saveText(Project *project);

Q_SIGNALS:
    void directoryChanged();
    void projectLoadFailed();

private:
    QDir            m_dir;
};
#endif//PROJECTHANDLER_H
