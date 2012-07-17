
/*
    Copyright 2011 Aevum Software aevum @ aevumlab.com

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.

    @author Victor Vicente de Carvalho victor.carvalho@aevumlab.com
    @author Ozires Bortolon de Faria ozires@aevumlab.com
*/

#ifndef GDX_CPP_ASSETS_LOADERS_RESOLVERS_INTERNALFILEHANDLERESOLVER_HPP_
#define GDX_CPP_ASSETS_LOADERS_RESOLVERS_INTERNALFILEHANDLERESOLVER_HPP_

namespace gdx {

class InternalFileHandleResolver: public gdx::FileHandleResolver {
public:
    gdx::FileHandle& resolve (const std::string& fileName);

protected:


private:

};

} // namespace gdx

#endif // GDX_CPP_ASSETS_LOADERS_RESOLVERS_INTERNALFILEHANDLERESOLVER_HPP_