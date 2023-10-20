#pragma once

#include <sstream>

#include "LocationBlock.hpp"

/**
 * @brief Location 블록을 하위 블록으로 가질 수 있음
 * 
 */
class ServerBlock : public ABlock {
public:
    ServerBlock();

    virtual ABlock* getLastSubBlock();

    virtual void addSubBlock(std::string& line);
    virtual void refineDirectives();

    void print();

private:
    void setPort(const std::string& value);
    void setHostPort(const std::string& value);

    std::vector<LocationBlock> v_location_block_;

    /* server 블록에서만 사용되는 지시어 */
    std::string host_;
    int port_;
    std::string server_name_;
};