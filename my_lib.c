#include <stdio.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>


static int add(int a,int b){
    return a+b;
}

static void say(){
    printf("hello from c\n");
}

static int lua_hello_from_c(lua_State *L){
    printf("on enter lua hello from c\n");
    say();
    return 0;
}

static const struct luaL_Reg mylib_functions[] = {
    {"hello_from_c",lua_hello_from_c},
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