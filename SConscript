Import('env')

VersionString = "00.01.00"

sources = ['test.cpp']
objects = env.Compile(sources)
versionObject = env.CreateVersion("version.cpp", objects, [], VersionString)

env.Build('test', [objects, versionObject])
