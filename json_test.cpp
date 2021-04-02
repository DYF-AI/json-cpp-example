
#include <iostream>
#include <fstream>
#include <jsoncpp/json/json.h>
#include <jsoncpp/json/writer.h>

int demo1_write(){
    Json::Value js;
    js["name"] = Json::Value("DYF-AI");
    js["url"] = Json::Value("https://github.com/DYF-AI");

    Json::Value project;
    project["project1"]=Json::Value("json-cpp-example");
    project["project2"]=Json::Value("OpenCV-tutorials");

    js["project"] = Json::Value(project);

    std::cout << "js: " << js << std::endl;

    return 0;
}

int main(){

    demo1_write();

    return 0;
}
