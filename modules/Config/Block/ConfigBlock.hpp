#pragma once

#include "ServerBlock.hpp"

/**
 * @brief Server 블록을 하위 블록으로 가질 수 있음
 * 
 */
class ConfigBlock : public ABlock {
public:
    virtual ABlock* getLastSubBlock();

    virtual void addSubBlock(std::string& line);
    virtual void refineDirectives();

private:
    std::vector<ServerBlock> v_server_block_;
};