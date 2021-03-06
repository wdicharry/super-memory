#ifndef _FakeCipher_hpp_
#define _FakeCipher_hpp_

#include <BlockCipher.hpp>

#include <map>

#include <cstdlib>

class FakeCipher : public BlockCipher {
public:
    FakeCipher(std::size_t blockSize);
    virtual ~FakeCipher();

    virtual std::size_t initialize() override;
    virtual CharBlock encrypt(const CharBlock& block) override;
    virtual void outputStats(std::ostream& out) override;

private:
    const std::size_t mBlockSize;
    std::map<CharBlock, CharBlock> mDictionary;
    std::size_t mTotalBlocks;
};

#endif // _FakeCipher_hpp_
