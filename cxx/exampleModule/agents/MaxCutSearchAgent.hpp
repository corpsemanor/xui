#pragma once

#include <sc-memory/kpm/sc_agent.hpp>

#include "keynodes/keynodes.hpp"
#include "MaxCutSearchAgent.generated.hpp"

namespace exampleModule
{

    class GraphGirthSearchAgent : public ScAgent
    {
        SC_CLASS(Agent, Event(Keynodes::question_find_isomorphic_structures, ScEvent::Type::AddOutputEdge));
        SC_GENERATED_BODY();

    private:
        bool checkActionClass(ScAddr const & actionAddr);

    };

} // namespace exampleModule
