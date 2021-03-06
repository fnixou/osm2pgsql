#ifndef PROCESSOR_POINT_HPP
#define PROCESSOR_POINT_HPP

#include "geometry-processor.hpp"

class processor_point : public geometry_processor
{
public:
    processor_point(std::shared_ptr<reprojection> const &proj);

    wkb_t process_node(osmium::Location const &loc) override;

private:
    geom::osmium_builder_t m_builder;
};

#endif /* PROCESSOR_POINT_HPP */
