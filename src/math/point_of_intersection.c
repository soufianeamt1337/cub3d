/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point_of_intersection.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:08:20 by samajat           #+#    #+#             */
/*   Updated: 2022/12/18 19:42:14 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int point_is_vertical(int   y)
{
    return (!(y % ENTITY_SIZE));
}

int point_is_horizontal(int x)
{
    return (!(x % ENTITY_SIZE));
}



// t_point get_first_intersection_point_with_vectrics(const   t_vector    *ray)
// {
//     int x;
//     int y;

//     x = floor(ray->origPoint.X / ENTITY_SIZE) * ENTITY_SIZE;
//     y = -1 * (tan(convert_degree_to_radian(ray->direction)) * (x - ray->origPoint.X) - ray->origPoint.Y);
//     return ((t_point){x, y});
// }

// t_point get_first_intersection_point_with_horizons(const   t_vector    *ray)
// {
//     int x;
//     int y;

//     y = floor(ray->origPoint.Y / ENTITY_SIZE) * ENTITY_SIZE;
//     x = (ray->origPoint.Y - y)/ tan(3*M_PI/2) + ray->origPoint.X;
//     x = (ray->origPoint.Y - y)/ tan(convert_degree_to_radian(ray->direction)) + ray->origPoint.X;
//     return ((t_point){x, y});
// }

// t_point get_ray_last_intersection_with_vectrics(const   t_vector    *ray)
// {
//     int     x;
//     int     y;
//     int     xstep;
//     int     ystep;
//     t_point first_point;

//     first_point = get_first_intersection_point_with_vectrics(ray);
//     printf("vertical first intersection is : (x=%d, y=%d)\n", first_point.X, first_point.Y);
//     x = first_point.X;
//     y = first_point.Y;
//     xstep = ENTITY_SIZE;
//     ystep = xstep * tan(convert_degree_to_radian(ray->direction));
//     while (point_is_not_a_wall((t_point){x, y}))
//     {
//         x += xstep;
//         y += ystep;
//     }
//     return ((t_point){x, y});
// }

// t_point get_ray_last_intersection_with_horizons(const   t_vector    *ray)
// {
//     int     x;
//     int     y;
//     double     xstep;
//     double     ystep;
//     t_point first_point;

//     first_point = get_first_intersection_point_with_horizons(ray);
//     printf("horizon first intersection is : (x=%d, y=%d)\n", first_point.X, first_point.Y);
//     x = first_point.X;
//     y = first_point.Y;
//     ystep = ENTITY_SIZE;
//     xstep = ystep/tan(convert_degree_to_radian(ray->direction));
//     while (!point_is_not_a_wall((t_point){x, y}))
//     {
//         x += xstep;
//         y += ystep;
//     }
//     return ((t_point){x, y});
    
// }

// t_point get_ray_distance(t_vector   ray, double angle)
// {
//     // t_point HoriPoint;
//     t_point VerticPoint;
//     // double  vertical_distance;
//     // double  horizontal_distance;

//     ray.direction = angle;
//     // HoriPoint = get_ray_last_intersection_with_horizons(&ray);
//     VerticPoint = get_first_intersection_point_with_vectrics(&ray);
//     VerticPoint = get_ray_last_intersection_with_vectrics(&ray);
//     // VerticPoint = get_ray_last_intersection_with_horizons(&ray);
//     // printf("Horizonatal x: %d, y:%d\n", HoriPoint.X, HoriPoint.Y);
//     // printf("Vertical x: %d, y:%d\n", VerticPoint.X, VerticPoint.Y);
//     // horizontal_distance = get_distance_of_2_point(ray.origPoint, HoriPoint);
//     // vertical_distance = get_distance_of_2_point(ray.origPoint, VerticPoint);
//     // if (horizontal_distance < vertical_distance)
//     //     return (horizontal_distance);
//     // HoriPoint.X = 100;
//     // HoriPoint.Y = 100;
//     return (VerticPoint);
// }


void    func( int *y, double *a, double *b, double angle)
{
    if (angle > 180  && angle < 360)
    {
        *a *= -1;
        *b *= -1;
        // (void)y;
        (*y)--;
    }
}

void    func1(int *x, double *a, double *b, double angle)
{
    // if (angle <= 270 &&÷ angle)
    if ((angle <= 90  && angle >= 0) || (angle >= 270  && angle <= 360))
    {
        *a *= -1;
        *b *= -1;
        (*x)--;
    }
}

//---------
// t_point get_first_intersection_point_with_vectrics(const   t_vector    *ray)
// {
//     int x;
//     int y;

//     x = floor(ray->origPoint.X / ENTITY_SIZE) * ENTITY_SIZE;
//     y = roundf (-(tan(convert_degree_to_radian(ray->direction)) * (x - ray->origPoint.X) - ray->origPoint.Y));
//     return ((t_point){x, y});
// }


// t_point get_ray_last_intersection_with_vectrics(const   t_vector    *ray)
// {
//     int     x;
//     int     y;
//     double     xstep;
//     double     ystep;
//     t_point first_point;

//     first_point = get_first_intersection_point_with_vectrics(ray);
//     printf("vertical first intersection is : (x=%d, y=%d)\n", first_point.X, first_point.Y);
//     x = first_point.X ;
//     y = first_point.Y;
//     xstep = ENTITY_SIZE;
//     ystep = (xstep * tan((convert_degree_to_radian(ray->direction))));
//     func1(&x, &xstep, &ystep, ray->direction);
//     while (point_is_not_a_wall((t_point){x, y}))
//     {
//         x += xstep;
//         y += ystep;
//     }
//     return ((t_point){x, y});
// }

// int non_sense(double angle)
// {
//     return (angle)
// }

t_point get_first_intersection_point_with_horizons(const   t_vector    *ray)
{
    int x;
    int y;

    y = floor(ray->origPoint.Y / ENTITY_SIZE) * (ENTITY_SIZE) - 1 ;
    x = (ray->origPoint.X + (y - ray->origPoint.Y)/ tan(convert_degree_to_radian(ray->direction)));
    return ((t_point){x, y});
}

t_point get_ray_last_intersection_with_horizons(const   t_vector    *ray)
{
    int     x;
    int     y;
    double     xstep;
    double     ystep;
    t_point first_point;

    // ray->direction = 270 - ()
    first_point = get_first_intersection_point_with_horizons(ray);
    printf("float -->%f\n", ray->direction);
    printf("horizon first intersection is : (x=%d, y=%d)\n", first_point.X, first_point.Y - 1);
    x = first_point.X;
    y = first_point.Y;
    ystep = -ENTITY_SIZE;
    xstep = (ENTITY_SIZE/tan(convert_degree_to_radian(ray->direction)));
    printf("LOL %f\n", tan(convert_degree_to_radian(ray->direction)));
    xstep *=  (ray->direction < 270  && ray->direction >  90  && xstep > 0) ? -1 : 1;
    xstep *=  ((ray->direction > 270  || ray->direction <  90)  && xstep < 0) ? -1 : 1;
    // func(&y, &xstep, &ystep, ray->direction);
    //if ((data->ray.left_ray && xstep > 0) || (data->ray.right_ray && xstep < 0))

    // if ((ray->direction < 270  && ray->direction >  90  && xstep > 0))
    //     xstep *= -1;
    // if ((ray->direction < 270  && ray->direction >  90 ) )
    // if ((ray->direction > 270  && ray->direction <  90    && xstep < 0))
        // xstep *= -1;
    while (point_is_not_a_wall((t_point){x, y}))
    {
        printf("-----\n");
        x += (xstep);
        y += (ystep);
    }
    return ((t_point){x, y});
}

double get_ray_distance(t_vector   ray, double angle)
{
    t_point HoriPoint;
    t_point VerticPoint;
    // double  vertical_distance;
    double  horizontal_distance;

    (void)angle;
    HoriPoint = get_ray_last_intersection_with_horizons(&ray);
    // VerticPoint = get_first_intersection_point_with_vectrics(&ray);
    // VerticPoint = get_ray_last_intersection_with_vectrics(&ray);
    // HoriPoint = get_first_intersection_point_with_horizons(&ray);
    printf("Horizonatal x: %d, y:%d, Direction:%f\n", HoriPoint.X, HoriPoint.Y, ray.direction);
    printf("Vertical x: %d, y:%d\n", VerticPoint.X, VerticPoint.Y);
    horizontal_distance = get_distance_of_2_point(ray.origPoint, HoriPoint);
    // vertical_distance = get_distance_of_2_point(ray.origPoint, VerticPoint);
    // printf("****%f\n****%f\n", horizontal_distance, vertical_distance);
    // if (horizontal_distance < vertical_distance)
    return (horizontal_distance);
        // return (HoriPoint);
    // return (vertical_distance);
    // HoriPoint.X = 100;
    // HoriPoint.Y = 100;
    // return (VerticPoint);
    // return (HoriPoint);
}