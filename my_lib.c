#include <stdio.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>


static int add(lua_State *L){
    printf("on enter add \n");
    int a = luaL_checkinteger(L,1);
    int b = luaL_checkinteger(L,2);
    int c = a + b;
    lua_pushinteger(L,c);
    return 1;
}

static int hello_from_c(lua_State *L){
    printf("on enter hello_from_c\n");
    return 1;
}

static const struct luaL_Reg mylib_functions[] = {
    {"hello_from_c",hello_from_c},
    {"add",add},
    {NULL,NULL}
};

LUALIB_API int luaopen_mylib(lua_State *L){
    printf("what lua open my lib on onon\n");
    luaL_newlib(L,mylib_functions);
    return 1;
}

//(tried /usr/include/lua/5.3/lua.h 
// /usr/include/lua5.3/lua.h /usr/include/lua-5.3/lua.h 
// /usr/include/lua53/lua.h /usr/include/lua.h)