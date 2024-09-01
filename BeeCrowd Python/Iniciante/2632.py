import math

spell_damages = {
    "fire": 200,
    "water": 300,
    "earth": 400,
    "air": 100
}


spell_rays = {
    "fire": {1: 20, 2: 30, 3: 50},
    "water": {1: 10, 2: 25, 3: 40},
    "earth": {1: 25, 2: 55, 3: 70},
    "air": {1: 18, 2: 38, 3: 60}
}


def get_value_damage(hit_attempt, feitico):
    if hit_attempt:
        return spell_damages.get(feitico, 0)
    return 0


def get_distance_to_rectangle(cx, cy, x0, y0, largura, altura):
    closest_x = max(x0, min(cx, x0 + largura))
    closest_y = max(y0, min(cy, y0 + altura))

    dx = cx - closest_x
    dy = cy - closest_y

    return math.sqrt(dx * dx + dy * dy)


def get_hit_attempt(min_distance, ray_distance):
    return min_distance <= ray_distance


def get_ray(feitico, nivel_feitico):
    return spell_rays.get(feitico, {}).get(nivel_feitico, 0)


def main():
    casos_teste = int(input())

    for _ in range(casos_teste):
        largura, altura, x0, y0 = map(int, input().split())
        feitico, nivel_feitico, cx, cy = input().split()
        nivel_feitico = int(nivel_feitico)
        cx = int(cx)
        cy = int(cy)

        ray_distance = get_ray(feitico, nivel_feitico)
        min_distance = get_distance_to_rectangle(cx, cy, x0, y0, largura, altura)
        hit_attempt = get_hit_attempt(min_distance, ray_distance)
        final_damage = get_value_damage(hit_attempt, feitico)

        print(final_damage)

main()
