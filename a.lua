local mylib = package.loadlib("./libmylib.so","luaopen_mylib")
print(mylib)
print(type(mylib))
local m = mylib()
print(m)
m.hello_from_c()