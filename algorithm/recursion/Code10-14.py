import matplotlib.pyplot as plt
from matplotlib.patches import Circle
import random

def draw_color_circle(ax, x, y, r):
    # 무작위 RGB 색상 만들기
    color = (
        random.randint(0, 255) / 255,
        random.randint(0, 255) / 255,
        random.randint(0, 255) / 255
    )

    # 실제 원 그리기
    circle = Circle(
        (x, y),
        r,
        fill=False,
        edgecolor=color,
        linewidth=2
    )
    ax.add_patch(circle)

    # 반지름이 5 이상이면 좌우에 작은 원을 재귀로 그림
    if r >= 5:
        draw_color_circle(ax, x - r / 2, y, r / 2)
        draw_color_circle(ax, x + r / 2, y, r / 2)


fig, ax = plt.subplots(figsize=(12, 4))

draw_color_circle(ax, 64, 64, 64)

ax.set_xlim(0, 128)
ax.set_ylim(0, 128)
ax.set_aspect("equal")
ax.set_facecolor("black")
ax.axis("off")

plt.show()